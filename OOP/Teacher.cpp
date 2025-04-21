#include "Teacher.h"

void Teacher::read()
{
	std::cout << "TEACHER!\n";
	Human::read();
	std::cout << "Class name: ";
	std::cin >> m_className;

	std::cout << "Classroom: ";
	std::cin >> m_classroom;
}

void Teacher::write()
{
	std::cout << "TEACHER!\n";
	Human::write();
	std::cout << "Class name: " << m_className << std::endl;
	std::cout << "Classroom: " << m_classroom << std::endl;
}
