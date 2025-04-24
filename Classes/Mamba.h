#pragma once
#include "BaseClass.h"

class Mamba : public baseClassName {
public:
	Mamba(int age, int lifeSpan, std::string name, int poisonLevel) : baseClassName(age, lifeSpan, name), poisonLevel(poisonLevel){

	}
	void read() override;

	void write() override;

	eType getType() override {
		return eType::MAMBA;
	}
private:
	int poisonLevel;
};