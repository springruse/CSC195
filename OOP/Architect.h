#pragma once
#include "Human.h"
#include <iostream>

class Architect : public Human {
public:
	Architect() {
		std::cout << "architect constructor!\n";
	}

	Architect(std::string name, age_t age, unsigned int numOfTools, unsigned int contractNumber, std::string placeLocation) :
		Human{ name, age },
		m_numOfTools{ numOfTools },
		m_contractNumber{ contractNumber },
		m_placeLocation{ placeLocation }
	{
		std::cout << "architect constructor!\n";
	}

	unsigned int getNumOfTools() {
		return m_numOfTools;
	}

	unsigned int getContractNumber() {
		return m_contractNumber;
	}

	void setNumOfTools(unsigned int numOfTools) {
		m_numOfTools = numOfTools;
	}

	void setContractNumber(unsigned int contractNumber) {
		m_contractNumber = contractNumber;
	}

private:
	unsigned int m_numOfTools;
	unsigned int m_contractNumber;
	std::string m_placeLocation;
};

