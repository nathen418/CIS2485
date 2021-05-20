//Nate Goldsborough
//2020-6-25
//Homework 4 Problem 3
//output all multiples of 3 from 99 - 66
//Iterate a for loop to print out the correct numbers as required
//Then also iterate a while loop to print out the same numbers

#include <iostream>
using namespace std;

int main()
{
	//output required numbers
	for (int i = 99; i >= 66; --i) {
		if (i % 3 == 0) {
			cout << i << endl;
		}
	}

	//output required values
	int val = 99;
	cout << "+----------+" << endl;
	while (val >= 66) {
		if (val % 3 == 0) {
			cout << val << endl;
		}
			val--;
	}





}
