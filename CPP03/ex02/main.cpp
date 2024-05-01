#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	ClapTrap a("Atalay");
	ScavTrap b("Baba");
	FragTrap c("Kral");
	b.attack("kral32");
	b.guardGate();
	c.highFivesGuys();
	a.attack("kral");
	a.beRepaired(4);
	a.takeDamage(0);
}
