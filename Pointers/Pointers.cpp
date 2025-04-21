

#include <iostream>

void function() {
	bool b = true;
    int i = 5;
}

void function2() {
    bool b = false;
    float f = 10.0f;

    function();
}

void function3() {
    int a[100000];
    function3(); // causes recursion, because we're infinite looping through it 
}

void pointerFunction1(int* v) {
    *v = 5;
}

void pointerSwap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

class Animal {

public:
    Animal(std::string name) {
        name_ = name;
    }

    std::string getName() {
		return name_;
    }
private:
    std::string name_;

};

int main()
{
    int i = 5;
    float f = 4.5f;

    /*function2();*/
    /*function3();*/

    {
        int* pointer = new int(5);
        std::cout << *pointer << std::endl;
        delete pointer;
    }

    Animal* dog = new Animal("dawg"); // uses pointer reference
    std::cout << dog->getName() << std::endl;
	std::cout << (*dog).getName() << std::endl;
    delete dog;
    dog = nullptr;

    if (dog) {
        std::cout << dog->getName() << std::endl;
    }

	Animal cat("cat"); // doesn't use pointer reference
	std::cout << cat.getName() << std::endl;

    malloc(sizeof(int) * 1000); // can do a size of anything

    int* block = (int*)malloc(sizeof(int) * 1000);
    block[0] = 3;
	block[1] = 4;
	block[2] = 5;

    std::cout << *(block + 2) << std::endl;


    //
    int v1 = 10;
    int v2 = 20;

    int* p;
    p = nullptr;

    std::cout << p << std::endl;

    p = &v1;
    *p = 5;
	std::cout << v1 << std::endl;

    p = &v2;
    *p = 6;
    std::cout << v2 << std::endl;

    std::cout << v1 << " " << v2 << std::endl;

    //pointerFunction1(p);
    pointerSwap(&v1, &v2);

    std::cout << v1 <<  " " << v2 << std::endl;
}
