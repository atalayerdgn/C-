#pragma once

template<typename T>
void swap(T &arg1, T &arg2)
{
    T tmp = arg1;
    arg1 = arg2;
    arg2 = tmp;
}

template<typename T>
T   min(const T &arg1, const T &arg2)
{
    return (arg1 < arg2) ? arg1 : arg2;
}

template<typename T>
T   max(const T &arg1, const T &arg2)
{
    return (arg1 > arg2) ? arg1 : arg2;
}