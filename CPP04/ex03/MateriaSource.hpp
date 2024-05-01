#pragma once

# include "IMateriaSource.hpp"
class MateriaSource : public IMateriaSource
{
	private:
		AMateria*	_learnedMaterias[4];
		int			_numLearned;
	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource& copy);
		~MateriaSource(void);
		MateriaSource&	operator=(const MateriaSource& other);
		void		setNumLearned(const int numLearned);
		int			getNumLearned(void) const;
		void		learnMateria(AMateria* m);
		AMateria*	createMateria(std::string const& type);
};
