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
    int userAnswer = 0;
    bool runProgram = true;
    int targetNumber = roll1(generator);


   while (runProgram) {
        cout << "Pick a number between 1-10:" << endl;
        cin >> userAnswer;

        if (userAnswer > targetNumber) {
            cout << "The number is too big! Try again." << endl;
        }
        else if (userAnswer < targetNumber) {
            cout << "The number is too small! Try again." << endl;
        }
        else {
            cout << "You've got the answer! It was: " << targetNumber << endl;
            cout << "Thakns for playing!" << endl;
            runProgram = false;
        }
   }

   return 0;
};


