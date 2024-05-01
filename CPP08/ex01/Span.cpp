#include "Span.hpp"

Span::Span(unsigned int n):_size(n)
{
    g1.reserve(_size);
}

Span::~Span()
{
    g1.clear();
}

Span::Span(const Span& oth)
{
    *this = oth;
}

Span& Span::operator=(const Span& oth)
{
    this->g1 = oth.g1;
    this->_size = oth._size;
    return (*this);
}


void Span::addNumber(int n)
{
    if (g1.size() < static_cast<size_t>(_size))
        g1.push_back(n);
}

void    Span::addNumbers(iter begin, iter end)
{
    iter it;
    for (it = begin; it != end; ++it) {
        this->addNumber(*it);
    }
}

int Span::shortestSpan()
    {
        if (_size > 1)
        {
		    long minSpan = std::numeric_limits<int>::max();
	
		    for (int i = 0; i < _size; ++i)
			{
		        for (int j = i + 1; j < _size; ++j)
				{
		            long span = std::abs(g1[i] - g1[j]);
		            if (span < minSpan) {
		                minSpan = span;
		            }
		        }
		    }

		    return minSpan;
        }
        else
            throw ValueNotFoundException();
        return (0);
    }

int Span::longestSpan()
{
        if (_size > 1)
        {
            long minNum = *std::min_element(g1.begin(), g1.end());
            long maxNum = *std::max_element(g1.begin(), g1.end());
            return (maxNum - minNum);
        }
        else
            throw ValueNotFoundException();
    return (0);
}
