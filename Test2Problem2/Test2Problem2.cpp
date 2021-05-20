//Nate Goldsborough
//2020-7-11
//Test 2 Problem 2


#include <iostream>
#include <cmath>

using namespace std;

double GetAverage(double array[], int size) {
	
	//define vars and gc
	double total = 0.0;
	double average = 0.0;
	
	//add up all elements of array
	for (int i = 0; i < size; ++i) {
		total += array[i];
		cout << "AVG LOOP Total: " << total << endl;
	}
	
	//calculate average of array
	average = total / size;
	cout << "AVG Average: " << average << endl;
	return average;
}

double GetVariance(double array[], int size) {

	//define vars and gc
	double variance = 0.0;
	double total2 = 0.0;
	

	//debugging print statments
	cout << "VAR size: " << size << endl;
	cout << "VAR sum: " << total2 << endl;
	cout << "VAR variance 1: " << variance << endl;
	cout << "VAR total2: " << total2 << endl;


	//calculae SIGMA(x-mu)^2
	for (int i = 0; i < size; ++i) {

		//display loop number (to show where i am in the array)
		cout << "VAR LOOP i: " << i << endl;
		
		//calculate (x-mu)^2
		total2 += pow(array[i] - GetAverage(array, size), 2);

		//display loop total (for debugging)
		cout << "VAR Total2: " << total2 << endl;
	}
	
	//calculate variance from total2 and size
	variance = total2 / size;
	return variance;

}


int main()
{

	//define vars and gc
	const int NUMBER_OF_TEST_SCORES = 19;
	double TestScores[NUMBER_OF_TEST_SCORES] = { 180, 122.5, 153, 180, 180, 157.5, 178, 178, 198, 168, 150, 162, 154, 188, 195, 180, 176, 168, 153 };

	//get variance and average from functions
	double variance = GetVariance(TestScores, NUMBER_OF_TEST_SCORES);
	double average = GetAverage(TestScores, NUMBER_OF_TEST_SCORES);

	//print variance and average of test data
	cout << "+-----------------------------------+" << endl << endl << endl;
	cout <<  "MAIN Variance: " << variance << endl;
	cout << "MAIN Average: " << average << endl;

	//End of program. No seriously that's it
}
