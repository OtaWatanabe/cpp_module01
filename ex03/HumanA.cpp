#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string initName, Weapon &initWeapon) :weapon(initWeapon), name(initName) {}

void	HumanA::attack(void) const {
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
