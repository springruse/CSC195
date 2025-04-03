
#include <iostream>
int main()
{
    const float tax = 0.1f;
    std::string name;
    char initialFirst;
    short age;
    bool isAdult;
    unsigned int zipCode;
    float hourlyWage;
    short daysWorked;
    float hourWorkedPerDay[7];
    

    std::cout << "Hello World!\n";

    std::cout << "Please enter a name! ";
    std::cin >> name;

    std::cout << "Please enter your initial last letter name! ";
    std::cin >> initialFirst;

    std::cout << "Enter an age! ";
    std::cin >> age;
    isAdult = (age >= 18);

    std::cout << "Enter a zipcode! ";
    std::cin >> zipCode;

    std::cout << "Please enter your hourly wage! ";
    std::cin >> hourlyWage;

    std::cout << "How many days have you worked? [7 max] ";
    std::cin >> daysWorked;

    float totalHours = 0;
    for (int i = 0; i < daysWorked; i++) {
        std::cout << "Please enter the hours worked per day " << (i + 1) << ": ";
        std::cin >> hourWorkedPerDay[i];

        totalHours += hourWorkedPerDay[i];
    }

    float grossIncome = totalHours * hourlyWage;
    float taxAmount = grossIncome * tax;
    float netIncome = grossIncome - taxAmount;

    std::cout << "\nEmployee Payroll Summary\n";
    std::cout << "-------------------------\n";
    std::cout << "Name: " << name << " " << initialFirst << ".\n";
    std::cout << "Age: " << age << " (Adult: " << (isAdult ? "Yes" : "No") << ")\n";
    std::cout << "Zipcode: " << zipCode << "\n";
    std::cout << "Hourly Wage: $" << hourlyWage << " per hour\n";
    std::cout << "Total Hours Worked: " << totalHours << " hours\n";
    std::cout << "Gross Income: $" << grossIncome << "\n";
    std::cout << "Tax Amount: $" << taxAmount << "\n";
    std::cout << "Net Income: $" << netIncome << "\n";
}

