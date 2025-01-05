#include "Harl.hpp"

int	main() {
	Harl	harl;
	std::string	levels[] = {"DEBUG", "INFO", "WARNING", "ERROR", "NOTHING"};

	for (int i = 0; i < 5; ++i) {
		std::cout << "level " << levels[i] << std::endl;
		harl.complain(levels[i]);
	}
}
