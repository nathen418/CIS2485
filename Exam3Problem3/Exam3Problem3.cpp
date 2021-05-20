//Nate Goldsborough
//2020/7/25
//Exam 3 Problem 3

//Develop a C++ program that plays out a round of Rock, Paper, Scissors using Object Oriented Programming


#include <iostream>
#include "Player.h"
#include <string>
using namespace std;


void comparePlayers(int player1Choice, int player2Choice, string player1Name, string player2Name) {
    

    if (player2Choice == 1)
    {
        if (player1Choice == 2)
        {
            cout << player1Name << " wins: (Paper covers rock)." << endl;
        }
        else if (player1Choice == 3)
        {
            cout << player2Name << " wins: (Rock smashes scissors)." << endl;
        }
        else if (player1Choice == 1)
        {
            cout << "Tie." << endl;
        }
    }
    else if (player2Choice == 2)
    {
        if (player1Choice == 1)
        {
            cout << player2Name << " wins: (Paper covers rock)." << endl;
        }
        else if (player1Choice == 3)
        {
            cout << player1Name << " wins: (Scissors cuts paper)." << endl;
        }
        else if (player1Choice == 2)
        {
            cout << "Tie." << endl;
        }
    }
    else if (player2Choice == 3)
    {
        if (player1Choice == 1)
        {
            cout << player1Name << " wins: (Rock smashes scissors)." << endl;
        }
        else if (player1Choice == 2)
        {
            cout << player2Name << " wins: (Scissors cuts paper)." << endl;
        }
        else if (player1Choice == 3)
        {
            cout << "Tie." << endl;
        }
    }
}


int main()
{

	//define player objects and vars/gc
	Player player1;
	Player player2;
	string player1Name;
	string player2Name;

	//get Player1's name
	cout << "Welcome to Rock Paper Scissors!" << endl;
	cout << "Player 1 enter your name here: ";
	cin >> player1Name;
	player1.setName(player1Name);

	//get Player2's name
	cout << "Player 2 enter your name here: ";
	cin >> player2Name;
	player2.setName(player2Name);

	//player 1 picks
	cout << player1.getName() << " it's your turn, ";
	player1.setUserChoice();

	//player 2 picks
	cout << player2.getName() << " it's your turn, ";
	player2.setUserChoice();


    //compare player choices and display the winner
    comparePlayers(player1.getUserChoice(), player2.getUserChoice(), player1.getName(), player2.getName());
}
