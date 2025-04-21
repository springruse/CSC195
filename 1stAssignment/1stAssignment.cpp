// 1stAssignment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "Student.h"
#include <iostream>
#include <string>
using namespace std; // using namespace we can ignore using std:: and just use cout easily



class Person {
    

    void doPersonFunction() {

    }

public:
    float weight;
    std::string name;
    int age;
};

int main()
{
    Student student1("Alec");
    function();
    student1.Write();
    student1.SetName("John");

    Person person1;
    person1.age = 19;

    unsigned int i = 41;
    /*printf("%d\n", i);*/
    std::cout << i << std::endl;
    std::cout << sizeof(char) << std::endl;
    cout << sizeof(Person) << std::endl;
    char c = 'A';

    cout << i++ << endl;

    i++;
    i += 5;

    cout << &i << endl;
    
    cout << "Hello, World!" << endl;
    cout << "Git is now tracking this project!" << endl;
    return 0;
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
