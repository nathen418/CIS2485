//Nate Goldsborough
//2020-7-16
//Activity 9 Probblem 3 Option 1
//This program demonstrates partially initialized structure variables


//import libraries
#include <iostream>
#include <cmath>
#include <iomanip>
#include <algorithm> 
#include <vector>
using namespace std;


//declare structure "circle'
struct circle
{
	float centerX; 
	float centerY; 
	float radius;
	float area;
	float circumference;
	float distance_from_origin;
	int index;
};

//define pi so it's easier
const float PI = 3.14159;
bool sortByDistance(const circle &lhs, const circle &rhs) { return lhs.distance_from_origin < rhs.distance_from_origin; }

int main()
{
	//define 2 circle structure variables
	int index;

	//define circle vector
	vector<circle> array(6);

	for (int i = 0; i < 6; ++i) {
		//assign circle index
		array[i].index = i + 1;
		//get radius
		cout << "Please enter the radius of the circle " << i+1 << ": ";
		cin >> array[i].radius;

		//get x-coord
		cout << endl << "Please enter the x-coordinate of the center: ";
		cin >> array[i].centerX;

		//get y-coord
		cout << endl << "Please enter the y-coordinate of the center: ";
		cin >> array[i].centerY;

		//calculate circle1's info
		array[i].area = PI * pow(array[i].radius, 2.0);
		array[i].circumference = 2 * PI * array[i].radius;
		array[i].distance_from_origin = sqrt(pow(array[i].centerX, 2.0) + pow(array[i].centerY, 2.0));

		//make some space
		std::cout << endl << endl;
	}




	sort(array.begin(), array.end(), sortByDistance);

	for (int i = 0; i < 6; ++i) {
		std::cout << "I: " << i << "   CenterX:   " << array[i].centerX << endl;
		std::cout << "I: " << i << "   CenterY:   " << array[i].centerY << endl;
		std::cout << "I: " << i << "   Radius:    " << array[i].radius << endl;
		std::cout << "I: " << i << "   Distance:  " << array[i].distance_from_origin << endl;
	}


	cout << "The closest circle is " << array[0].index << " which is " << array[0].distance_from_origin << " units away from the origin" << endl;
}
