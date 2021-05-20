//Nate Goldsborough
//2020-7-16
//Homework 7 Problem 1
// This program uses a structure to hold data about a rectangle

#include <iostream>
#include <iomanip>

using namespace std;

struct rectangle {
	float length;
	float width;
	float perimeter;
	float area;
};


void main()
{
	bool isSquare = false;
	//define box
	rectangle box;

	//get box's info
	cout << "Enter the length of a rectangle: ";
	cin >> box.length;

	cout << "Enter the width of a rectangle: ";
	cin >> box.width;

	//lets get some space in here
	cout << endl << endl;

	//calculate the box's area and perimeter
	box.area = box.length * box.width;
	box.perimeter = 2 * box.length + 2 * box.width;

	if (box.width == box.length) {
		isSquare = true;
	}
	//set cout options
	cout << fixed << showpoint << setprecision(2);


	//display the area and perimeter of the box and if it is a square
	cout << "The area of the box is: " << box.area << endl;
	cout << "The perimeter of the box is: " << box.perimeter << endl;
	if (isSquare) {
		cout << "The box is a Square!" << endl;
	}
}