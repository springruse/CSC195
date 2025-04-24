#include "Penguin.h"

void Penguin::read()
{
	baseClassName::read();
	std::cout << "What pole does the animal reside in?(south/north):  " << std::endl;
	std::string input;
	std::cin >> input;

	if (input == "SOUTH" || input == "south") {
		region = poleRegion::SOUTH;
	}
	else if (input == "NORTH" || input == "north") {
		region = poleRegion::NORTH;
	}
	else {
		std::cout << "A invalid input was given, defaulting to South.\n";
	}
}

void Penguin::write()
{
	baseClassName::write();
	std::cout << "Region: " << (region == poleRegion::SOUTH ? "SOUTH" : "NORTH") << std::endl;
}



