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


#include<iostream>

using namespace std;

bool isPerfectNumber(int value) {


	return true;
}


int main()
{
	//define vars
	long int n, i;
	int total = 0;

	//get number from user
	cout << "Enter the number: ";
	cin >> n;
	cout << endl << "Divisors of " << n << " are";

	//loop thru integers '1 thru n'
	for (i = 1; i <= n; ++i)
	{
		//display i
		cout << "loop counter: " << i << endl;
		if (n % i == 0)
			cout << " " << i;
		cout << endl << "Total loop: " << total << endl;
		total += i;
	}
	cout << endl << "Total: " << total<< endl;
	if (total = n) {
		cout << endl << "n is a perfect number";
	}

	return 0;
}
