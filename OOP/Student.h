#pragma once
#include "Human.h"
#include <iostream>


class Student : public Human {
public:
	Student() {
		std::cout << "student constructor!\n";
	}
	Student(std::string name, age_t age, float gpa) :
		Human{ name,age },
		m_gpa{ gpa }
	{
		std::cout << "student constructor!\n";
	}

	void read() override;
	void write() override;

	
	float getGPA() {
		return m_gpa;
	}

	void setGPA(float gpa) {
		m_gpa = gpa;
	}
	Type getType() override {
		return Type::STUDENT;
	}

	void work() override {
		std::cout << "student work!\n";
	}
private:
	float m_gpa = 0.0f;

};