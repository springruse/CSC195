#pragma once
#include <iostream>
#include <string>

class baseClassName {
public:

	enum class eType {
		PENGUIN,
		UNICORN,
		MAMBA,
	};

	baseClassName(int age, int lifeSpan, std::string name) {
		this->age = age;
		this->lifeSpan = lifeSpan;
		this->name = name;
	}

	virtual void read() {
		std::cout << "What is the animals name? \n";
		std::cin >> name;
		std::cout << "What is the animal's expected lifespan? \n";
		std::cin >> lifeSpan;
		std::cout << "What is the animal's age? \n";
		std::cin >> age;
	}

	virtual void write() {
		std::cout << "Name: " << name << std::endl;
		std::cout << "Age: " << age << std::endl;
		std::cout << "Lifespan: " << lifeSpan << std::endl;
	}

	std::string getName() {
		return name;
	}

	virtual eType getType() = 0;

protected:
	int age;
	int lifeSpan;
	std::string name;
};

