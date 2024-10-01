

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float cookieamt;
	float cupsugar =(1.5 / 48), cupbutter =(1.0 / 48), cupflour =(2.75 / 48); //defines the amount for each ingredient based on the numbers given


	cout << "please enter your desired amount of cookies";
	cin >> cookieamt;//allows the user to input their desired amount, which gets assign to the cookieamt integer

	cupsugar = cookieamt * cupsugar, cupbutter = cookieamt * cupbutter, cupflour = cookieamt * cupflour;
	
	cout << "in order to make " << setprecision(2) << cookieamt << " cookies, you need " << setprecision (2) << cupsugar << "cups of sugar, " << setprecision (2) << cupbutter << "cups of butter, and " << setprecision (3) << cupflour << "cups of flour" << endl;

}