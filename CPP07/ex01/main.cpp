#include "iter.hpp"



int main()
{
    int arr[6] = {1,4,5,6,7};
    iter<int>(arr,5,print);
    char arr1[7] = "atalay";
    iter<char>(arr1,6,print);
}