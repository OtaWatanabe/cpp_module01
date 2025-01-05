#include "Zombie.hpp"

void	Zombie::announce(void) const {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string set_name) {
	name = set_name;
}

Zombie::~Zombie(void) {
	std::cout << "Zombie " << name << ": destroyed" << std::endl;
}
