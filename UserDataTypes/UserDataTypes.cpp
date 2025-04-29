
#include <iostream>
#include "Employee.h"
using namespace std;

int main()
{
    int numOfEmployees;
    std::cout << "Number of Employees (Max 5): ";
    cin >> numOfEmployees;

    if (numOfEmployees > 5) {
        numOfEmployees = 5;
        
    }

    Employee employees[5];

    for (int i = 0; i < numOfEmployees; i++) {
        cout << "Enter Employee Details: " << (i+1) << endl;
		employees[i].read();
    }

	std::cout << "Payroll Summary" << std::endl;
	std::cout << "=================" << std::endl;
	for (int i = 0; i < numOfEmployees; i++) {
		employees[i].write();
	}
	return 0;

}
