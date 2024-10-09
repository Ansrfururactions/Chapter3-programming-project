// Chapter3 programming project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float principle, intrest, compound, intrestrate, savings;

	cout << "enter your principle" << endl;
	cin >> principle;

	cout << "enter your intrest rate" << endl;
	cin >> intrestrate;
	
	intrestrate = intrestrate/100;

	intrest = principle * intrestrate;

	cout << "enter enter the amount of times your interest is compounded" << endl;
	cin >> compound;

	savings = principle * pow(1 + (intrestrate / compound), compound);

	cout << "principle: " << principle << endl << "intrest rate: " << intrestrate << endl << "intrest: " << intrest << endl << "amount of times compounded: " << compound << endl << "amount of savings: " << savings << endl;
	return 0;

}

