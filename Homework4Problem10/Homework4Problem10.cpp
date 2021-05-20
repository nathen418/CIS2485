//Nate goldsborough
//2020-6-26
//Homework 4 Problem 10
//Print all factorial values from 5! to 11!
//Iterate using a loop structure of your choice to print out the correct numbers as required


#include <iostream>
using namespace std;


void main()
{
	cout << "+---------------------------+" << endl;
	for (int i = 5; i <= 11; ++i) {
		//int n = 5;
		int fact = 1;
		int j;
		for (j = 1; j <= i; j++)
			fact = fact * j;
		cout << " Factorial of " << i << " is " << fact << endl;
		cout << "+---------------------------+" << endl;
	}
}