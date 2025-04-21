#include "Human.h"
#include "Console.h"


int Human::m_count = 0;
const float Human::m_tax = 0.2f;

void function() {
	std::cout << "function!\n";
}

void Human::read()
{
	std::cout << "Name: ";
	std::cin >> m_name;
	std::cout << "Age: ";
	m_age = getData<age_t>();
	//std::cin >> m_age;
}

void Human::write()
{
	std::cout << "Name: " << m_name << std::endl;
	std::cout << "Age: " << m_age << std::endl;
}
