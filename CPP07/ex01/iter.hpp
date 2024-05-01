#pragma once


#include <iostream>

template <typename T>
void    print(const T& index)
{
    std::cout << index;
}
template <typename T>
void    iter(const T *arr, int len, void(*func)(const T&))
{
    for (int i = 0; i < len ; i++)
        func(arr[i]);
    std::cout << std::endl;
}