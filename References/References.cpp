

#include <iostream>

// reference = & <- this thing
// pointer = * < -this thing


// reference needs to be assigned AT delcaration
// pointer can be assigned at any time

void pointAssign1(int* v) {
	
	if (v != nullptr) {
		*v = 5;
	}
}

void swap(int& a, int& b) { // reference version
	int temp = a;
	a = b;
	b = temp;
}
void swap(int* a, int* b) { // pointer version
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
    int int1 = 5;
	int int2 = 10;

	int* pointer1 = &int1; 
	pointer1 = nullptr;
	pointAssign1(pointer1);

	int& reference1 = int1;
	reference1 = 3;

	std::cout << "int1: " << int1 << " int2: " << int2 << std::endl;
	swap(&int1, &int2);
	std::cout << "int1: " << int1 << " int2: " << int2 << std::endl;
	swap(int1, int2);
	std::cout << "int1: " << int1 << " int2: " << int2 << std::endl;

	/*std::cout << int1 << std::endl;
	std::cout << &reference1 << std::endl;
	std::cout << &int1 << std::endl;*/


}

