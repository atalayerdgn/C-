#include "ScalarConverter.hpp"

void ScalarConverter::convert(std::string str)
{
	double val = 0.0;
	if (str.length() == 1 && !std::isdigit(str[0]))
		val = static_cast<double>(str[0]);
	else
		val = std::strtod(str.c_str(), NULL);
	std::cout << "char: ";
    if (!((val < 0) || (val > std::numeric_limits<char>::max()) || (val != val)))
	{
        if (std::isprint(static_cast<int>(val)))
            std::cout << "\"" << static_cast<char>(val) << "\"";
	    else
            std::cout << "Non displayable";
    }
    else
        std::cout << "impossible";
    std::cout << std::endl;

    std::cout << "int : ";
    if (!((val < std::numeric_limits<int>::min()) || (val > std::numeric_limits<int>::max()) || (val != val)))
        std::cout << static_cast<int>(val);
    else
        std::cout << "impossible";
    std::cout << std::endl;

    std::cout << "float : " << static_cast<float>(val);
    if (static_cast<float>(val) - static_cast<long>(val) == 0.0f)
        std::cout << ".0";
    std::cout << "f" << std::endl;

    std::cout << "double : " << val;
    if (val - static_cast<long>(val) == 0.0)
        std::cout << ".0";
    std::cout << std::endl;
};