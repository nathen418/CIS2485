//Nate goldsborough
//2020-6-25
//output all INTEGER powers of 3 grom 6561 - 27
//Iterate using a loop structure of your choice to print out the correct numbers as required

#include <iostream>
#include <cmath>
using namespace std;


//6561
int main()
{

	//for loop to iterate thru 3^1 and 3^20
	for (int i = 1; i <= 20; ++i) {
		//if statement to only print the numbers between 27 and 6561
		if (pow(3, i) >= 27 && pow(3, i) <= 6561) {
			cout << pow(3, i) << endl;
		}

	}
 






}