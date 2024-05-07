#pragma once


#include <iostream>
#include <list>
#include <vector>

template <typename Container, typename it>
class PmergeMe
{
	private:
	PmergeMe();
	~PmergeMe();
	PmergeMe& operator=(const PmergeMe& oth);
	PmergeMe(const PmergeMe& oth);
	public:
    static void merge(it first, it mid, it last)
    {
        Container merged(std::distance(first, last));
		it left = first, right = mid;
		it merged_it = merged.begin();

        while (left != mid && right != last)
        {
            if (*left < *right) {
                *merged_it = *left;
                ++left;
            } 
            else {
                *merged_it = *right;
                ++right;
            }
            ++merged_it;
        }

        while (left != mid) {
            *merged_it = *left;
            ++left;
            ++merged_it;
        }

        while (right != last) {
            *merged_it = *right;
            ++right;
            ++merged_it;
        }

        std::copy(merged.begin(), merged.end(), first);
    }
    static void insertionSort(it first, it last) 
    {
        for (it i = first + 1; i != last; ++i) {
            int key = *i;
            it j = i - 1;

            while (j >= first && key < *j)
            {
                *(j + 1) = *j;
                --j;
            }
            *(j + 1) = key;
        }
    }

	static void fordJohnsonSort(it first, it last)
	{
		size_t size = std::distance(first,last);
		if (size < 16)
			insertionSort(first, last);
		else
		{
			it mid = first + size / 2;
			fordJohnsonSort(first , mid);
			fordJohnsonSort(mid, last);
			merge(first, mid , last);
		}
	}	
};

template <typename Container>
void printContainer(const Container &container)
{
    typename Container::const_iterator it;
    for (it = container.begin(); it != container.end(); it++) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}