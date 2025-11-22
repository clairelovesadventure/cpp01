#include "Zombie.hpp"
#include <iostream>

int main(int argc, char* argv[]) 
{
	if (argc != 2) {
		std::cerr << "Usage: " << argv[0] << " <number of zombies>" << std::endl;
		return 1;
	}
	int N = atoi(argv[1]);
	Zombie* horde = zombieHorde(N, "HordeZombie");
	
	for (int i = 0; i < N; i++) {
		horde[i].announce();
	}
	
	delete[] horde;
	
	return 0;
}

