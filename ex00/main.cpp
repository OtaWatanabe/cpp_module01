#include "Zombie.hpp"

int	main() {
	Zombie*	zombie;

	zombie = newZombie("z1");
	if (!zombie) {
		std::cout << "memory allocation failed" << std::endl;
		return 1;
	}
	zombie->announce();
	randomChump("z2");
	delete zombie;
}
