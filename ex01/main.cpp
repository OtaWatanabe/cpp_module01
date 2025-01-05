#include "Zombie.hpp"

int	main() {
	Zombie	*horde;

	horde = zombieHorde(10, "zzz");
	if (!horde) {
		std::cout << "memory allocation failed" << std::endl;
		return 1;
	}
	for (int i = 0; i < 10; ++i) horde[i].announce();
	delete [] horde;
}
