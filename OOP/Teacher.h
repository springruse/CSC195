#pragma once

#include "Human.h"

using classroom_t = unsigned short;

class Teacher : public Human
{
public:
    Teacher() {}
    Teacher(std::string name, age_t age, std::string className, classroom_t classroom) :
        Human{ name, age },
        m_classroom{ classroom },
        m_className{ className }
    {
        //
    }

    void setClassName(std::string className) {
		m_className = className;
    }

	std::string getClassName() {
		return m_className;
	}

	void setClassroom(classroom_t classroom) {

        if (classroom >= 300 && classroom <= 400) {
            return;

            m_classroom = classroom;
        }	
	}

    classroom_t getClassroom() {
        return m_classroom;
    }

	Type getType() override {
		return Type::TEACHER;
	}

    void work() override {
		std::cout << "teacher work!\n";
    }

    void read() override;
    void write() override;

private:
    std::string m_className;
    classroom_t m_classroom = 0;

};