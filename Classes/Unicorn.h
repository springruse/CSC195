#pragma once
#include <iostream>
#include <string>
#include "BaseClass.h"

class Unicorn : public baseClassName {

public:
	Unicorn(int age, int lifeSpan, std::string name, int magicPower)
		: baseClassName(age, lifeSpan, name), magicPower(magicPower) {

	}

	eType getType() override {
		return eType::UNICORN;
	}

	void read() override;

	void write() override;


private:
	int magicPower;
};
