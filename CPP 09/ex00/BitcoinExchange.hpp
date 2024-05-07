#pragma once


#include <iostream>
#include <algorithm>
#include <fstream>
#include <map>
#include <sstream>



class BitcoinExchange
{
	private:
	std::multimap<std::string, double> g1;
	public:
	BitcoinExchange();
	~BitcoinExchange();
	BitcoinExchange(const BitcoinExchange& oth);
	BitcoinExchange& operator=(const BitcoinExchange& oth);
	void parse(const std::string);
	void print();
	void parsedata();
	void addData(std::string&,double);
	void exec(std::string, double);
	int	date_invalid(std::string line);
};
