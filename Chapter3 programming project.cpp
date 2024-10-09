// Chapter3 programming project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <random>
using namespace std;

int main()
{
   
    default_random_engine generator;
    uniform_int_distribution<int> distribution(1, 900);
 
    int variableone = distribution(generator);
    int variabletwo = distribution(generator);

    int answer= variableone + variabletwo, studentresponse; //defines all variables relevant to answering the question
    
    cout << variableone << " + " << variabletwo << " = ? " << endl;
    cin >> studentresponse;

    if (answer == studentresponse)
    
        cout << "correct!" << endl;
    else
        cout << "incorrect, the answer is " << answer << endl;


    
}

