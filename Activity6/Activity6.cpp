//Nate Goldsborough
//2020-6-25
//Activity 6


#include <iostream>
using namespace std;


// This function will get the number of bottles returned
int getBottles()
{
	int counter = 1;
	int totalBottles = 0;
	while (counter <= 7)
	{
		int todayBottles;
		cout << "Enter number of bottles for today: ";
		cin >> todayBottles;
		totalBottles = totalBottles + todayBottles;
		counter = counter + 1;
	}
	return totalBottles;
}

// This function will calculate the payout
float calcPayout(int totalBottles)
{
	return totalBottles * 0.10f;
}

// This function will display the information
void printInfo(int totalBottles, float totalPayout)
{
	cout << "The total number of bottles collected is " << totalBottles << endl;
	cout << "The total paid out is $" << totalPayout << endl;
}


void main()
{
	string endProgram = "no";
	while (endProgram == "no")
	{
		int totalBottles = getBottles();
		float totalPayout = calcPayout(totalBottles);
		printInfo(totalBottles, totalPayout);
		cout << "End the program ? (Enter yes or no) : ";
		cin >> endProgram;

	}
}
