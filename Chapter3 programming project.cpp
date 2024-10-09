// Chapter3 programming project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <random>
using namespace std;

int main()
{
    default_random_engine generator;
    uniform_int_distribution<int> distribution(-999, 999);

    int variableone = distribution(generator), variabletwo = distribution(generator), answer=variableone + variabletwo;

    cout << 
}

