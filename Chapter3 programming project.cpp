

#include <iostream>
using namespace std;

int main()
{
	int cookieamt;//defines the integer for the user to input later
	float cupsugar =cookieamt* (1.5 / 48), cupbutter =cookieamt * (1 / 48), cupflour = cookieamt * (2.75 / 48);//defines the amount for each ingredient based on the numbers given



	cout << "please enter your desired amount of cookies";
	cin >> cookieamt;//allows the u

	cout << "in order to make " << cookieamt << " cookies, you need " << cupsugar << "cups of sugar, " << cupbutter << "cups of butter, and " << cupflour << "cups of flour" << endl;

}