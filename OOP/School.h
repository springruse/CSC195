#pragma once
#include "Human.h"
#include <vector>
class school {

public:
	~school();
	
	void add(Human::Type type);

	void displayAll();
	

	void displayByType(Human::Type type) {

	}

	void displayByName(std::string name) {
		
	}

	
private:
	std::vector<Human*> m_humans;
	
};