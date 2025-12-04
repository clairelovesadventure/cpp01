#include "Zombie.hpp"

Zombie* newZombie(std::string name) {
	return new Zombie(name);
}

//new是在堆上分配内存，而delete是在堆上释放内存