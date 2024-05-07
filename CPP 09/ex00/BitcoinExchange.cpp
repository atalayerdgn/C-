#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{

}

BitcoinExchange::~BitcoinExchange()
{
	g1.clear();
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& oth)
{
	(void)oth;
	return (*this);
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& oth)
{
	*this = oth;
}
bool	mydigit(std::string s)
{
	const char *str = s.c_str();
	int	i = 0;
	int	comma = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i])
	{
		if ((str[i] >= '0' && str[i] <= '9') || (str[i] == '.'))
		{
			if (str[i] == '.')
				comma++;
			i++;
			if (comma == 2)
				return (false);
		}
		else
			return (false);
	}
	return (true);
}
void	BitcoinExchange::parse(const std::string ff)
{
	std::ifstream file(ff);

    if (!file.is_open()) {
        std::cerr << "Unable to open file." << std::endl;
        return;
    }
	std::string line;
	std::getline(file, line);
    while (std::getline(file, line)) {
    	std::string date, val;
        size_t pos = line.find('|');
        if (pos == std::string::npos) {
			date = line.substr(0, pos);
			val = "-2147483648";	
        }
		else
		{
       		date = line.substr(0, pos);
        	val = line.substr(pos + 1);
		}
		double data; 
		if (mydigit(val))
			data = std::strtod(val.c_str(),NULL);
		else
		{
			std::cout << "Error: bad input =>" << date << std::endl;
			continue;
		}
		if (data == -2147483648)
		{
			std::cout << "Error: bad input =>" << date << std::endl;
			continue;
		}
		else if (data < 0)
		{
			std::cout << "Error: not a positive number." << std::endl;
			continue;
		}
		else if (data > 1000)
		{
			std::cout << "Error: Too large a number." << std::endl;
			continue;
		}
		else if (date_invalid(date))
		{
			std::cout << "Error: bad input => " + date << std::endl;
			continue;
		}
		this->exec(date,data);
		
    }
    file.close();
}

void	BitcoinExchange::print()
{
	std::multimap<std::string,double>::iterator ite = g1.begin();
	while(ite != g1.end())
	{
		std::cout << "key : " << (ite->first) << "val : " << (ite->second) << std::endl;
		ite++;
	}
}

void	BitcoinExchange::addData(std::string& line, double key1)
{
	g1.insert(std::make_pair(line, key1));
}
void	BitcoinExchange::parsedata()
{
	std::ifstream file("data.csv");
    if (!file.is_open()) {
        std::cerr << "Unable to open file." << std::endl;
        return;
    }
	std::string line;
	std::getline(file, line);
    std::string date, val;
    while (std::getline(file, line)) {
        size_t pos = line.find(',');
		date = line.substr(0, pos);
        val = line.substr(pos + 1);
		float data = std::strtof(val.c_str(),NULL);
        this->addData(date,data);
    }
    file.close();
}

int	BitcoinExchange::date_invalid(std::string line)
{
	
	std::istringstream iss(line);
	std::string date;
	char sep = '-';
	int flag = 1;
	while (std::getline(iss,date,sep))
	{
		int	tmp = atoi(date.c_str());
		if (tmp >= 2000 && tmp <= 2024)
		{
			flag = 0;
		}
		else if (!(tmp >= 1 && tmp <= 12))
		{
			flag = 1;
		}
	}
	if (flag == 0)
		return (0);
	return (1);
}

void BitcoinExchange::exec(std::string line, double val)
{
	std::multimap<std::string, double>::iterator it = g1.lower_bound(line);
	if (it != g1.begin())
	{
		--it;
		std::cout << line << " => " << it->second  * val << std::endl;
	}
	else
	{
		std::cout << line << " => " << it->second  * val << std::endl;
	}
}
