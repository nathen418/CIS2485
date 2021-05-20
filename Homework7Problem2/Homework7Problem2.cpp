//Nate GOldsbortoufh
//2020-7-12
//Homework 7 Problem 2
// This program demonstrates partially initialized structure variables

#include <iomanip>
#include <iostream>
#include <string>
using namespace std;



struct taxPayer
{
	string name;
	long socialSecNum;
	float taxRate;
	float income;
	float taxes;
};



void main()
{
	//define citizen1
	taxPayer citizen1;
	citizen1.name = "Tim McGuiness";
	citizen1.socialSecNum = 255871234;
	citizen1.taxRate = 0.35;

	//define citizen1
	taxPayer citizen2;
	citizen2.name = "John Kane";
	citizen2.socialSecNum = 278990582;
	citizen2.taxRate = 0.29;

	//set cout options
	cout << fixed << showpoint << setprecision(2);

	//get yeear's income for citizen1
	cout << "Please enter the year's income for citizen1: ";
	cin >> citizen1.income;

	//get yeear's income for citizen2
	cout << "Please enter the year's income for citizen2: ";
	cin >> citizen2.income;

	//calculate taxes due for citizen 1 and 2
	citizen1.taxes = citizen1.income * citizen1.taxRate;
	citizen2.taxes = citizen2.income * citizen2.taxRate;


	// The output of all the data is shown here
	cout << fixed << showpoint << setprecision(2);
	cout << endl << "Name: " << citizen1.name << endl;
	cout << "Social Security Number: " << citizen1.socialSecNum << endl;
	cout << "Taxes due for this year: $" << citizen1.taxes << endl << endl;
	cout << "Name: " << citizen2.name << endl;
	cout << "Social Security Number: " << citizen2.socialSecNum << endl;
	cout << "Taxes due for this year: $" << citizen2.taxes << endl << endl;
}