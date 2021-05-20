//A perfect number is a positive integer value that is equal to the sum of its divisors(not including itself, obviously)
//
//6 is a perfect number since its divisors(1, 2, 3) sum up to 6
//28 is a perfect number since its divisors(1, 2, 4, 7, 14) sum up to 28
//Develop a C++ function(as shown below) that determines if an integer input value is a perfect number
//
//bool IsPerfectNumber(int value)
//The function does not print anything at all...  It just computesand returns a true / false value
//Develop a C++ program that performs the following :
//
//For all integer values from 1 to 100000 :
//    Calculate if the integer value is a perfect number(by using the function)
//    Display only the values that are perfect numbers




#include <iostream>
using namespace std;

bool isPerfectNumber(int value) {

}

int main()
{
	/*for (int i = 1; i <= 100000; ++i) {
		if (isPerfectNumber(i)) {
			cout << i;

		}
	}*/
	int num = 100000;

	for (int i = 1; i <= num; ++i) {
		if (num % i == 0)
			cout << i << endl;
	}

}
