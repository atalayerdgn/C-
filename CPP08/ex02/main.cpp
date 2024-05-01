#include "MutantStack.hpp"

#if 0
int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "Top: " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "Size: " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	return 0;
}
#else
int	main()
{
	MutantStack<char> cstack;
	cstack.push('a');
	cstack.push('m');
	cstack.push('b');
	cstack.push('d');
	cstack.push('e');
	cstack.pop();
	std::cout << "Top: " << cstack.top() << std::endl;
	std::cout << "Size " << cstack.size() << std::endl;
	MutantStack<char>::iterator it = cstack.begin();
	MutantStack<char>::iterator ite = cstack.end();
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
}
#endif
