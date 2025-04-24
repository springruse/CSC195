// Misc.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Point.h"
#include <vector>
#include <string>
#include <fstream>
#pragma once

#define NAME "Alec"
#define PI 31.1415634f
//#define XBOX
//#define PS5
//#define SWITCH

using names_t = std::vector<std::string>;

namespace math {

    template<typename T1, typename T2>

    int max(T1 a, T2 b) {

        return (a > b) ? a : b; // same exact thing previously down below

        if (a > b) {
            return a;
        }
        else return b;
    }

    template<typename T>

    class class1 {
    protected:
        T value;
    };

}

void print(const names_t& names) {
    
    for (std::string name : names) {
        std::cout << name << std::endl;
    }
}


template<typename T>
void streamOut(std::ostream& ostream, const T& text) {
    ostream << text << std::endl;
}

void streamIn(std::istream& istream, std::string text) {
    istream >> text;
}

int main()
{
#ifdef _DEBUG
    std::cout << "program start\n";
#endif

#ifdef _XBOX
    std::cout << "xbox code\n";
#endif

#ifdef PS5
    std::cout << "PS5 code\n";
#endif

#ifdef SWITCH
    std::cout << "switch code\n";
#endif
    Math::Point<int> point4(4, 5);
    std::cin << point4;
    
	std::cout << PI << std::endl;
    // write out to file
    streamOut(std::cout, NAME);
	std::ofstream fStream("test.txt");
    streamOut(fStream, point4);
	streamOut(fStream, "Johnson");
    streamOut(fStream, 30);
    streamOut(fStream, 34.5f);
    fStream.close();

    //read in from file
    std::string text;
    std::ifstream ifStream("test.txt");

    if (ifStream.is_open()) {

        std::getline(ifStream, text);

        while (std::getline(ifStream, text)) {
            std::cout << text << std::endl;
        }
        streamIn(std::cin, text);

    }
	fStream.close();
    

    Math::Point<int> point1(5, 25);
    Math::Point<int> point2(3, 11);
    Math::Point<int> point3;

    point3 = point1 + point2;
    

    std::cout << point3 << std::endl;
	std::cout << point3.getX() << point3.getY() << std::endl;

    /*std::cout << std::max(3, 9) << std::endl;
    std::cout << math::max(6, 10.3f) << std::endl;
    names_t names = {"Alec", "Nicholas", "Riley"};
    names.push_back("Alec");
	print(names);*/
}

