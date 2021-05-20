//Nate goldsborough
//2020-6-25
//Homework4 Problem 2
//Show all odd numbers from 19 - 43
//Iterate a for loop to print out the correct numbers as required
//Then also iterate a while loop to print out the same numbers

#include <iostream>
using namespace std;



int main()
{

	//print required numbers using a for loop
	for (int i = 18; i <= 49; ++i) {
		if (i % 2 != 0) {
			cout << i << endl;
		}
	}

	//print required numbers with a while loop
	int val = 18;
	cout << "+-----------+" << endl;
	while (val <= 49) {
		if (val % 2 != 0) {
			cout << val << endl;
		}
		val++;
	}





}