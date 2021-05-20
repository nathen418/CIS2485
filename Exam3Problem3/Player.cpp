#include "Player.h"
#include <iostream>

std::string Player::getName() const
{
	return name;
}

int Player::getUserChoice() const
{
	return userChoice;
}

void Player::setName(std::string NAME)
{
	name = NAME;
}

void Player::setUserChoice()
{
	//get choice from user
	int userRps = 1;
	do {
		std::cout << "Enter your choice. (1=Rock 2=Paper 3=Scissors): ";
		std::cin >> userRps;

	} while (userRps < 0 || userRps > 3);

	userChoice = userRps;
}
