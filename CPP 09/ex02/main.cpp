#include "PmergeMe.hpp"
#include <iostream>
#include <vector>
#include <deque>
#include <cstdlib>
#include <ctime>
#include <ctime>
#include <cassert>

std::vector<int> generatenumber()
{
    std::vector<int> numbers;
    std::srand(std::time(nullptr));

    for(int i = 0; i < 3000; i++)
    {
        numbers.push_back(rand());
    }
    return numbers;
}

int main(int argc, char *argv[])
{
    std::vector<int> vec;
    std::deque<int> dq;
    if (argc > 1)
    {
            for (int i = 1; i < argc; ++i) {
                int value = std::atoi(argv[i]);
                if (value < 1) {
                    std::cerr << "Error: Invalid input value \"" << argv[i] << "\". Only positive integers are allowed." << std::endl;
                    exit(EXIT_FAILURE);
                }
                vec.push_back(value);
                dq.push_back(value);
        }
        std::cout << "Before: ";
        printContainer(vec);

        clock_t start1 = clock();
        PmergeMe<std::vector<int>, std::vector<int>::iterator>::fordJohnsonSort(vec.begin(), vec.end());
        clock_t end1 = clock();
        double time1 = static_cast<double>(end1 - start1) / CLOCKS_PER_SEC * 1000;

        clock_t start2 = clock();
        PmergeMe<std::deque<int>, std::deque<int>::iterator>::fordJohnsonSort(dq.begin(), dq.end());
        clock_t end2 = clock();
        double time2 = static_cast<double>(end2 - start2) / CLOCKS_PER_SEC * 1000;

        std::cout << "After: ";
        printContainer(vec);
        std::cout << "Time to process a range of " << vec.size() << " elements with std::vector container: " << time1 << " μs" << std::endl;
        std::cout << "Time to process a range of " << dq.size() << " elements with std::deque container: " << time2 << " μs" << std::endl;
        assert(vec == std::vector<int>(dq.begin(), dq.end()) && "The sorted sequences are not equal.");
        std::cout << "The sorted sequences are equal." << std::endl;
    }
    else
    {
        std::cerr << "Error: Sequence is not given!" << std::endl;
    }
    return 0;
}