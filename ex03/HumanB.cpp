#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string initName) :weapon(NULL), name(initName) {}

void	HumanB::setWeapon(Weapon &set_weapon) {
	weapon = &set_weapon;
}

void	HumanB::attack(void) const {
	if (weapon) std::cout << name << " attacks with their " << weapon->getType() << std::endl;
	else std::cout << name << " has no weapons" << std::endl;
}
