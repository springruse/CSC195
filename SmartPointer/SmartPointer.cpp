// SmartPointer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <memory>
using namespace std;
int g = 5;

template<typename T> 

struct smart_ptr {
public:
    smart_ptr() = delete;

    smart_ptr(T* p) : pointer{ p } {
		this->pointer = p;
    }
    ~smart_ptr() {
        delete pointer;
        cout << "deleted" << endl;
    }

    T* pointer = 0;

    T dereference()  { return *pointer; }

	T& operator * ()  { return *pointer; }

    T* operator & () { return pointer; }

private:

};

int main()
{
    g = 10;
    int integer = 5;
    int* intPointer = &integer;

    {
        smart_ptr<int> smartPointer(new int(10));
        *smartPointer = 20;
        std::cout << smartPointer.dereference() << std::endl;
        std::cout << &smartPointer << std::endl;
		std::cout << smartPointer.pointer << std::endl;



		smart_ptr<float> smartPointer2(new float(20.35f));

    }

    std::unique_ptr<int> uniquePointer = std::make_unique<int>(25);  // unique smart pointer, only has one possible owner
	cout << *uniquePointer << endl;
    std::shared_ptr<int> sharedPointer1 = make_shared<int>(45); // shared pointer, can share with as many as it wants
    {
        std::shared_ptr<int> sharedPointer2 = sharedPointer1;
        std::cout << sharedPointer1.use_count() << std::endl;
    }
    std::shared_ptr<int> sharedPointer3 = sharedPointer1;

    
}


