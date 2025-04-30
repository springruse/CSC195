

#include <iostream>
#include "fraction.h"

using mathlib::Fraction;

int main()
{
	Fraction<int> f1(3, 4);
	std::cout << "fraction 1: " << f1 << std::endl;
	Fraction<int> f2(1, 2);
	std::cout << "fraction 2: " << f2 << std::endl;

	std::cout << "simplifying fraction 2" << std::endl;
	std::cout << "simplified fraction 2: " << f2.simplify() << std::endl;

	std::cout << f1 << " == " << f2 << " result: " << (f1 == f2) << std::endl;
	std::cout << f1 << " > " << f2 << " result: " << (f1 > f2) << std::endl;

	std::cout << f1 << " + " << f2 << " result: " << (f1 + f2) << std::endl;
	std::cout << f1 << " * " << f2 << " result: " << (f1 * f2) << std::endl;
	std::cout << f1 << " - " << f2 << " result: " << (f1 - f2) << std::endl;


	Fraction<int> f3;
	std::cout << "input fraction (numerator - denominator): \n";
	std::cin >> f3;
	std::cout << f3 << std::endl;
	std::cout << f3.toFloat() << std::endl;
}

