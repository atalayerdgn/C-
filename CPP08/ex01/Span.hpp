#pragma once


#include <iostream>
#include <vector>

typedef std::vector<int>::iterator iter;

class Span
{
    private:
    std::vector<int> g1;
    int _size;
    public:
    Span(unsigned int);
    ~Span();
    Span(const Span& oth);
    Span& operator=(const Span& oth);
    void    addNumber(int);
    void    addNumbers(iter,iter);
    int shortestSpan();
    int longestSpan();
    class ValueNotFoundException:public std::exception
    {
        public:
        const char *what() const throw()
        {
            return ("Value Not Found!");
        }
    };
};