//Nate Goldsborough
//2020-7-12
//Test 2 Problem 3

//Develop a C++ program that looks for a given value in a text file full of integer values
//
//Prompt the user for a value to search for in the file
//
//No input validation is required
//Open the accompanying text file named numbers.txt
//
//Search the contents of the text file
//
//You may not "hard-code" the quantity of values found in the file...
//Use a loop of some sort until the end of the text file is reached
//Maintain how many many times the value is found in the file
//
//Close the text file when processing is complete
//
//Display the number of times the value is found in the file

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
 
	//define vars and gc
	int value;
	vector<int> list;

	//open file
	fstream numbers;
	numbers.open("numbers.txt",ios::in);

	//checking whether the file is open
	if (numbers.is_open())
	{
		//loop thru file and send all data to the vector (list)
		while (numbers.eof() == false) {
			numbers >> value;
			list.push_back(value);
		}

		//sort list in assending order
		sort(list.begin(), list.end());

		//loop thru list to check if a number is unique or not
		int frequency;
		for (int i = 0; i < list.size() - 1; ++i) {

			//if numbers are the same there must be a number that is not unique. this finds how many times it appears
			if (list[i] == list[i + 1]) {
				int searching = list[i];		
				frequency = count(list.begin(), list.end(), searching);
			}

			//i cant figure out how to make this print statment print only once,
			//but it technically fufills the program requirement of telling how many times
			//a value was shown in the file
			cout << "The number " << list[i] << " appeared " << frequency << " times." << endl;
		}

		//close the text file
		numbers.close();
	}
	else {
		//if something went wrong opening the file let the user know
		cout << "Something went wrong. Please put the text file in the same directory as this program.";
	}


}