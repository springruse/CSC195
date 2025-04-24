#include "Unicorn.h"

void Unicorn::read()
{
	baseClassName::read();
	std::cout << "What is the animal's magic power level? " << magicPower << std::endl;
	std::cin >> magicPower;
}
void Unicorn::write() 
{
	baseClassName::write();
	std::cout << "Magic power: " << magicPower << std::endl;
}
