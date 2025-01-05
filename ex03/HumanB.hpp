#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"

class HumanB {
private:
	Weapon		*weapon;
	std::string	name;
public:
	HumanB(std::string initName);
	void	setWeapon(Weapon &set_weapon);
	void	attack(void) const;
};

#endif