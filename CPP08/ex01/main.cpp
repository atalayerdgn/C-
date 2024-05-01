#include "Span.hpp"
#if 0
int main()
{
Span sp = Span(5);
sp.addNumber(6);
sp.addNumber(3);
sp.addNumber(17);
sp.addNumber(9);
sp.addNumber(11);
std::cout << sp.shortestSpan() << std::endl;
std::cout << sp.longestSpan() << std::endl;
return 0;
}
#else
int main()
{
    std::vector<int> nums;
    int len = 10000;
    srand(time(0));
    for (int i = 0; i < len; ++i) {
        nums.push_back(rand());
    }
    Span sp = Span(len);
    sp.addNumbers(nums.begin(), nums.end());
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
}
#endif
