#include "BitcoinExchange.hpp"


int main(int ac, char **av)
{
    BitcoinExchange a;
    if (ac == 2)
    {
        a.parsedata();
        a.parse(av[1]);
    }
    else
        std::cout << "Error" << std::endl;
}
