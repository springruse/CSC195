#include "Human.h"
#include "Student.h"
#include "Teacher.h"
#include "school.h"
#include <iostream>
#include <vector>


int main()
{
	school NicholasSchool;

	bool isRunning = true;

	while (bool isRunning = true) {
		
		std::cout << " 1. add a human\n";
		std::cout << " 2. display all\n";
		std::cout << " 3. display human type\n";
		std::cout << " 4. exit\n";

		unsigned short selection;
		std::cin >> selection;

		switch (selection) {
		case 1:
			std::cout << "1)Student\n";
			std::cout << "2)Teacher\n";
			unsigned short type;
			std::cin >> type;
			NicholasSchool.add(static_cast<Human::Type>(type - 1));
			break;
		case 2:
			system("cls");
			NicholasSchool.displayAll();
			break;
		case 3:
			std::cout << "1)Student\n";
			std::cout << "2)Teacher\n";
			unsigned short type2;
			std::cin >> type2;
			system("cls");
			NicholasSchool.displayByType(static_cast<Human::Type>(type2 - 1));
			break;
		case 4:
			std::cout << "Goodbye!" << std::endl;
			isRunning = false;
			break;
		default:
			break;
		}

	}
}



