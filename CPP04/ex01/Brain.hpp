#pragma once


#include "Animal.hpp"
#include <iostream>

class Brain
{
private:
	std::string _ideas[100];
public:
	Brain(void);
	Brain(const std::string idea);
	Brain(const Brain& copy);
	~Brain(void);
	Brain&	operator=(const Brain& other);
	void			setIdea(const std::string idea);
	void			setIdea(unsigned int idx, const std::string idea);
	const std::string&	getIdea(void) const;
	const std::string&	getIdea(unsigned int idx) const;
};
