#include "School.h"
#include "Student.h"
#include "Teacher.h"

school::~school()
{
	for (Human* human : m_humans) {
		delete human;
	}
	m_humans.clear();
}

void school::add(Human::Type type)
{
	Human* human = nullptr;

	switch (type) {
	case Human::Type::STUDENT:
		human = new Student;
	
		break;

	case Human::Type::TEACHER:
		human = new Teacher;
		break;

	default: 
		break;
	}

	human->read();
	m_humans.push_back(human);
	
}

void school::displayAll()
{
	for (Human* human : m_humans) {
		human->write();
	}
}
