#pragma once
#include <string>

class Player {

public:

	//Get Functions
	std::string getName() const;
	int getUserChoice() const;

	//Set Functions
	void setName(std::string NAME);
	void setUserChoice();

	

private:
	std::string name;
	int userChoice = 0;

	
};