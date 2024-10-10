//Carey Barber
// 10|1|2024  

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float principle, intrest, compound, intrestrate, savings;

	cout << "enter your principle" << endl;
	cin >> principle; //stores principle

	cout << "enter your intrest rate" << endl;
	cin >> intrestrate; //stores the intrest rate
	
	intrestrate = intrestrate/100; //turns the intrest rate into a decimal

	intrest = principle * intrestrate; //calculates intrest amount

	cout << "enter enter the amount of times your interest is compounded" << endl;
	cin >> compound; //stores the amount of times the intrest is compounded

	savings = principle * pow(1 + (intrestrate / compound), compound); //calculates savings

	cout << "principle: " << principle << endl << "intrest rate: " << intrestrate << endl << "intrest: " << intrest << endl << "amount of times compounded: " << compound << endl << "amount of savings: " << savings << endl;//displays results
	return 0;

}

