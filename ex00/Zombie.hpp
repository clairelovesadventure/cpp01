#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie {
private:
	std::string name;
	int index;

public:
	Zombie(std::string name);
	~Zombie();
	void announce(void);
	void setName(std::string name, int index);
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif

