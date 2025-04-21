#include "Employee.h"

const float Employee :: Tax = 0.1f;

void Employee::read() {
	std::cout << "Enter name: ";
	std::cin >> name;

	std::cout << "Enter age: ";
	std::cin >> age;

	std::cout << "Enter zipcode: ";
	std::cin >> zipCode;

	std::cout << "Enter hourly wage: ";
	std::cin >> wage;

	std::cout << "Enter enter total hours worked this week: ";
	std::cin >> hoursWorked;
}

void Employee::write() {
    float weeklyGross = wage * hoursWorked;
    float weeklyTax = weeklyGross * Tax;
    float weeklyNet = weeklyGross - weeklyTax;
    float yearlyGross = weeklyGross * 52;
    float yearlyNet = yearlyGross - (yearlyGross * Tax);

    std::cout << "\nEmployee Payroll Summary\n";
    std::cout << "-------------------------\n";
    std::cout << "Name: " << name << "\n";
    std::cout << "Age: " << age << "\n";
    std::cout << "Zipcode: " << zipCode << "\n";
    std::cout << "Hourly Wage: $" << wage << "\n";
    std::cout << "Hours Worked: " << hoursWorked << "\n";
    std::cout << "Weekly Gross Pay: $" << weeklyGross << "\n";
    std::cout << "Weekly Net Pay: $" << weeklyNet << "\n";
    std::cout << "Yearly Gross Pay: $" << yearlyGross << "\n";
    std::cout << "Yearly Net Pay: $" << yearlyNet << "\n";
}