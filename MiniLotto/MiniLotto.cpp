#include "pch.h"
#include <iostream>
#include <time.h>
#include <cstdlib>
#include <string>

using namespace std;

string firstNumber, secondNumber, thirdNumber, fourthNumber;

int main()
{
    
	cout << "Welcome to the lottery! You'll need to pick 4 numbers." << endl << endl;

	cout << "Each number must be 0 - 9, and must be UNIQUE! You cannot enter the same number twice." << endl << endl;

	cout << "Please enter your first number: ";
	cin >> firstNumber;



	cout << "Please enter your second number: ";
	cin >> secondNumber;

	cout << "Please enter your third number: ";
	cin >> thirdNumber;

	cout << "Please enter your fourth number: ";
	cin >> fourthNumber;

	cout << "You chose: " << firstNumber << " " << secondNumber << " " << thirdNumber << " " << fourthNumber << endl;
	cout << "Is this correct?";



}


