//Nate Goldsborough
//Activity 3
//14.6.2020
//This program calculates the number of credits needed to finish a degree


#include <iostream>
#include <string>
#include <stdio.h>

int main() {
	
	//init vars
	std::string name = "";
	std::string degreeName = "";
	int totalCredits;
	int takenCredits;

	//get input from user
	std::cout << "Enter your first name: ";
	std::cin >> name;
	std::cout << "Enter the name of your degree program, replacing a space with an Underscore '_': ";
	std::cin >> degreeName;
	std::cout << "Enter the total number of credits you will need to complete to earn your " << degreeName << " degree: ";
	std::cin >> totalCredits;
	std::cout << "How many credits have you completed so far? ";
	std::cin >> takenCredits;

	//Output
	std::cout << "+----------------------------------+" <<std::endl;
	std::cout << "+---- Student Name: " << name << std::endl;
	std::cout << "+---- Degree Program: " << degreeName << std::endl;
	std::cout << "+---- Credits Completed: " << totalCredits << std::endl;
	std::cout << "+---- Credits Needed: " << takenCredits << std::endl;
	std::cout << "+---- Credits Remaining: " << (totalCredits - takenCredits) << std::endl;
	std::cout << "+----------------------------------+" << std::endl;

}
