#include "Zombie.hpp"

int main() {
	// 在堆上创建 zombie
	Zombie* heapZombie = newZombie("HeapZombie");
	heapZombie->announce();
	delete heapZombie;

	// 在栈上创建 zombie
	randomChump("StackZombie");

	return 0;
}

