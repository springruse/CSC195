#pragma once
#include <iostream>
#include <string>

class Employee {
public:
	void read();
	void write();
private:
	std::string name;
	short age;
	unsigned int zipCode;
	float wage;
	float hoursWorked;
	static const float Tax; // static constant

};
