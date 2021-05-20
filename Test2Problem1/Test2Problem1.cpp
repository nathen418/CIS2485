//Nate Goldsborough
//2020-7-11
//Test 2 Problem 1


//Develop a C++ program that determines the largest and second largest positive values in a collection of data
//Prompt the user to enter integer values until they enter any negative value to quit
//
//You may presume the user will input at least two valid integer values
//Create a loop structure of some sort to execute this input cycle
//
//Maintain the largestand second largest integer as the user inputs data
//This logic should be placed inside your loop structure
//Arrays are not needed to solve the problem!
//Display the largestand second largest values entered by the user

#include <iostream>
using namespace std;

int main()
{
	//define vars and gc
	int value = 1;
	int larger = 0;
	int largest = 0;

	//tell the user what to do
	cout << "Please enter integer values until you want to quit. If you want to quit enter a negative value" << endl;

	//start loop \while user inputs a positive int
	while (value > 0) {

		//get input from user
		cout << "Enter some positive integer value: ";
		cin >> value;
		cout << "Value entered: " << value << endl;
		
		//check if number entered is smaller than the largest number entered
		if (value > larger && value < largest) {
			larger = value; 

			//Debugging print statements
			cout << endl << endl << "Larger: " << larger << endl;
			cout << "Largest: " << largest << endl;
			cout << "-------END OF CHECK 1-------" << endl;
		}

		//check if number entered is the largest number entered
		if (value > larger && value > largest) {
			largest = value;

			//Debugging print statements
			cout << endl << endl << "Larger: " << larger << endl;
			cout << "Largest: " << largest << endl;
			cout << "-------END OF CHECK 2-------" << endl;
		}
	}

	//display the largest number and the next largest number
	cout << "Larger: " << larger << endl;
	cout << "Largest: " << largest << endl;
	cout << "-------END OF LOOP-------" << endl;
}
