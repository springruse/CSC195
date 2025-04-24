#include "Mamba.h"

void Mamba::read()
{
	baseClassName::read();
	std::cout << "What is the animal's venomous level amount?" << std::endl;
	std::cin >> poisonLevel;
}

void Mamba::write()
{
	baseClassName::write();
	std::cout << "Poison level: " << poisonLevel << std::endl;
}
