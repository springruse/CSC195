#include "Student.h"
#include "Console.h"

void Student::read()
{
	std::cout << "STUDENT!\n";
	Human::read();

	std::cout << "GPA: ";
	m_gpa = getData<float>();
	//std::cin >> m_gpa;
	
}

void Student::write()
{
	std::cout << "STUDENT!\n";
	Human::write();

	std::cout << "GPA: " << m_gpa << std::endl;

}
