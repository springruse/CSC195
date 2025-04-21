#include <iostream>
using namespace std;
struct Person
{
	char name[32];
	int id;
};

void Double(int* number) {
	*number = *number * 2;
}
void Square(int& number) {
	number = number * number;
}
int main()
{
	// ** REFERENCE **
	//
	// declare an int variable and set the value to some number (less than 10)
	
	int integer = 5;

	// declare a int reference and set it to the int variable above
	
	int& intReference = integer;

	// output the int variable
	
	cout << "Int variable: " << integer << endl;

	// set the int reference to some number
	
	intReference = 10;

	// output the int variable
	
	cout << "new int variable: " << integer << endl;

	// what happened to the int variable when the reference was changed? 
	// EDIT NOTE: The int variable changed to 10, because the integer follows the reference.

	// output the address of the int variable

	cout << "Address of int variable: " << &integer << endl;

	// output the address of the int reference
	
	cout << "Address of int reference: " << &intReference << endl;

	// are the addresses the same or different? 
	// EDIT NOTE: They are the same, because they're just under the same variable, being connected to one another.
	
	// ** REFERENCE PARAMETER **
	// create a function above main() called Square that takes in an int parameter
	// in the function, multiply the int parameter by itself and assign it back to the parameter(i = i * i)
	// call the Square function with the int variable created in the REFERENCE section
	// 
	Square(integer);
	// 
	// output the int variable to the console
	//
	cout << "Int variable after Square function: " << integer << endl;
	// 
	// !! notice how the variable has not changed, this is because we only passed the value to the function !!
	// change the Square function to take a int reference
	// !! notice how the calling variable has now changed, this is because we 'passed by reference' !!
	// !! when a function takes a reference parameter, any changes to the parameter changes the calling variable ""
	// 
	// ** POINTER VARIABLE **
	// declare an int pointer, set it to nullptr (it points to nothing)
	int* pointer = nullptr;
	// set the int pointer to the address of the int variable created in the REFERENCE section
	pointer = &integer;
	// output the value of the pointer
	cout << "Pointer value: " << pointer << endl;
	// what is this address that the pointer is pointing to? 
	// EDIT NOTE: it's pointing to the address of the current variable, being the integer I made.
	// output the value of the object the pointer is pointing to (dereference thepointer)
	cout << "Pointer dereference: " << *pointer << endl;

	// ** POINTER PARAMETER **
	//
	// create a function above main() called Double that takes in an int pointer parameter
	// in the function, multiply the int pointer parameter by 2 and assign it back to the parameter(i = i * 2)
	// !! make sure to dereference the pointer to set the value and not set the address !!
	// call the Double function with the pointer created in the POINTER VARIABLE section
	Double(pointer);
	// output the dereference pointer
	cout << "Pointer deference after Double function: " << *pointer << endl;
	// output the int variable created in the REFERENCE section
	cout << "Int variable after Double function: " << integer << endl;
	// did the int variable's value change when using the pointer?
	//EDIT NOTE: It was changed to 200 after the function was used because the pointer was dereferenced, changing the integers value as-well.
}
