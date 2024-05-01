#pragma once

#include <iostream>
#include <stack>

template<typename T>
class MutantStack: public std::stack<T>
{
public:
    typedef typename std::deque<T>::iterator iterator;
    MutantStack() {}
    ~MutantStack() {}
    MutantStack(const MutantStack& other) : std::stack<T>(other) {}
    MutantStack& operator=(const MutantStack& oth)
    {
        if (this != &oth) {
            this->std::stack<T>::operator=(oth);
        }
        return (*this);
    }
    typename std::deque<T>::iterator begin()
    {
        return std::stack<T>::c.begin();
    }

    typename std::deque<T>::iterator end() 
    {
        return std::stack<T>::c.end(); 
    }
};
