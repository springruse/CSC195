#pragma once
#include <iostream>
#include <vector>
#include "BaseClass.h"


class Database {
public:

	~Database();


	std::vector<baseClassName*> objects;

	void create(baseClassName::eType type) {
		baseClassName* obj = nullptr;

		switch (type) {
		case baseClassName::eType::PENGUIN:
			obj = new Penguin();
			break;
		}
	}

	void displayAll();

	void display(const std::string& name);

	void display(baseClassName::eType type);
private:

};

