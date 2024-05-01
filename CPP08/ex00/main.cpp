#include "easyfind.hpp"
#include <vector>
#include <stack>

int main()
#if 1
{
    std::vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
	int	val = 3;
    try {
        std::vector<int>::iterator it1 = easyfind(vec, val);
		if (*it1 == val)
        	std::cout << "Value found in vector" << std::endl;
    } catch (std::runtime_error& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
    return 0;
}
#else
{
	std::deque<int> container;

	container.push_front(4);
	container.push_front(0);
	container.push_front(2);
	container.push_front(1);
	int	val = 3;
    try 
	{
		std::deque<int>::iterator it1 = easyfind(container, val);
			if (*it1 == val)
				std::cout << "Value found in deque" << std::endl;
	} 
	catch (std::runtime_error& e) 
	{
        std::cout << "Exception caught: " << e.what() << std::endl;
	}
	return (0);
}
#endif
