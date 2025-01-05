#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>
# include <iostream>

class Zombie {
private:
	std::string	name;

public:
	~Zombie(void);
	void	announce(void) const;
	void	setName(std::string set_name);
};

Zombie*	zombieHorde(int N, std::string name);

#endif