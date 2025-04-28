// NumberGuess.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <random>
using namespace std;

int main()
{
    std::random_device diceroll;
    std::mt19937 generator(diceroll());
    std::uniform_int_distribution<int> roll1(1, 10);

    std::cout << "Hello World!\n";
}


