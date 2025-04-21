#pragma once
#include <iostream>

using age_t = unsigned short;

class Human {

public:
    enum class Type {
        STUDENT,
        TEACHER
    };

    Type personType = Type::STUDENT;
    int s = static_cast<int>(Type::TEACHER);

protected:
    std::string m_name;
    unsigned short m_age = 0;
    static int m_count;
    static const float m_tax;

public:
    Human() {
        std::cout << "human constructor!\n";
        m_count++;
    }

    Human(std::string name, age_t age) :
        m_name{ name },
        m_age{ age }
    {
        this->m_name = name;
        this->m_age = age;
        std::cout << "human constructor!\n";
        m_count++;
    }

    ~Human() {
        std::cout << "human destructor!\n";
        m_count--;
    }

    void virtual read();
    void virtual write();


    static int getCount() { return m_count; }

    std::string getName() { return m_name; }

	unsigned short getAge() { return m_age; }

    std::string setName(std::string name) {
		m_name = name;
    }

    void setAge(age_t age) {
        m_age = age;
    }


    virtual Type getType() = 0;
    virtual void work() = 0;
    
};

void function();
    
