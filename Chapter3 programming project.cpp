//Carey Barber
// 10|1|2024

#include <iostream>
#include <random>
using namespace std;

int main()
{
   
    random_device generator;
    uniform_int_distribution<int> distribution(1, 900);
 
    int variableone = distribution(generator);
    int variabletwo = distribution(generator);

    int answer= variableone + variabletwo, studentresponse; //defines all variables relevant to answering the question
    
    cout << variableone << " + " << variabletwo << " = ? " << endl; //asks for the answer
    cin >> studentresponse; //stores the student's response

    if (answer == studentresponse) //checks if student's response is correct
    
        cout << "correct!" << endl;
    else
        cout << "incorrect, the answer is " << answer << endl;


    
}

