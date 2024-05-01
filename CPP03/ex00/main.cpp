#include "ClapTrap.hpp"


int	main()
{
	ClapTrap a("sdasdas");
	ClapTrap b;
	ClapTrap c(b);
	
	a.attack("dddd");
	a.beRepaired(4);
	a.takeDamage(0);
}
