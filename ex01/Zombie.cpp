#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie() : name(""), index(0) {
}

Zombie::Zombie(std::string name) : name(name), index(0) {
}

Zombie::~Zombie() {
	std::cout << name << "[" << index << "]" << " is destroyed" << std::endl;
}

void Zombie::announce(void) {
	std::cout << name << "[" << index << "]: BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name, int index) {
	this->name = name;
	this->index = index;
}

