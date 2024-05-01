#include "Serializer.hpp"
#include <iostream>
int main()
{
    Data *ds = new Data;
    ds->x = 42;

    std::cout << ds << std::endl;
    uintptr_t rawPtr = Serializer::serialize(ds);
    std::cout << rawPtr << std::endl;
    Data *tmp = NULL;
    tmp = Serializer::deserialize(rawPtr);
    std::cout << tmp << std::endl << tmp->x << std::endl;
    delete ds;
    return 0;
}