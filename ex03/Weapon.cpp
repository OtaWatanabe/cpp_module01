#include "Weapon.hpp"

Weapon::Weapon(void) {}

Weapon::Weapon(std::string initType) : type(initType) {}

const std::string	&Weapon::getType(void) const {
	return type;
}

void	Weapon::setType(std::string newType) {
	type = newType;
}
