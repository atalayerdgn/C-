#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
		this->_learnedMaterias[i] = NULL;
	setNumLearned(0);
}

MateriaSource::MateriaSource(const MateriaSource& copy)
{
	*this = copy;
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < getNumLearned(); i++)
		delete _learnedMaterias[i];
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& other)
{
	if (this != &other)
	{
		for (int i = 0; i < getNumLearned(); i++)
			delete _learnedMaterias[i];
		for (int i = 0; i < other.getNumLearned(); i++)
			this->_learnedMaterias[i] = other._learnedMaterias[i]->clone();
		setNumLearned(other.getNumLearned());
	}
	return (*this);
}
void	MateriaSource::setNumLearned(const int numLearned)
{
	this->_numLearned = numLearned;
}

int	MateriaSource::getNumLearned(void) const
{
	return (this->_numLearned);
}

void	MateriaSource::learnMateria(AMateria* m)
{
	if (_numLearned < 4)
	{
		this->_learnedMaterias[getNumLearned()] = m;
		setNumLearned(getNumLearned() + 1);
	}
}

AMateria*	MateriaSource::createMateria(std::string const& type)
{
	for (int i = 0; i < getNumLearned(); i++)
	{
		if (this->_learnedMaterias[i]->getType() == type)
			return (this->_learnedMaterias[i]->clone());
	}
	return (NULL);
}
