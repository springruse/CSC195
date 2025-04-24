#pragma once
#include "BaseClass.h"




class Penguin : public baseClassName {
public:

	enum class poleRegion {
		SOUTH,
		NORTH
	};

	Penguin(int age, int lifeSpan, std::string name, poleRegion regionPoint ) : baseClassName(age, lifeSpan, name), region(regionPoint) {

	}

	void read() override;

	void write() override;

	eType getType() override {
		return eType::PENGUIN;
	}
private:

	poleRegion region;
};