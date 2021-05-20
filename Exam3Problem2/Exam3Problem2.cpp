//Nate Goldsborough
//2020/7/25
//Exam 3 Problem 2

//Develop a C++ program that plays out a round of Rock, Paper, Scissors using Functional Programming


#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int userChoice() {
	int userRps = 1;
    do {
        cout << "Enter your choice. (1=Rock 2=Paper 3=Scissors): ";
        cin >> userRps;

    } while (userRps < 0 || userRps > 3);
  
	return userRps;
}


int computerChoice()
{
	// Get the system time.
	unsigned seed = time(0);

	// Seed the random number generator.
	srand(seed);

	// Random number
	int random = (rand() % (4));

	//if random number is = to 0 set it to 1
	if (random == 0) {
		random = 1;
	}
	//cout << "Random number " << random;
	return random;
}

int main()
{
    cout << "Welcome to Rock Paper Scissors!" << endl;
	
	//define vars
    int user = 0;
    int computer = 0;

    user = userChoice();
    computer = computerChoice();

    if (computer == 1)
    {
        if (user == 2)
        {
            cout << "You win: (Paper covers rock)." << endl;
        }
        else if (user == 3)
        {
            cout << "Computer wins: (Rock smashes scissors)." << endl;
        }
        else if (user == 1)
        {
            cout << "Tie." << endl;
        }
    }
    else if (computer == 2)
    {
        if (user == 1)
        {
            cout << "Computer wins: (Paper covers rock)." << endl;
        }
        else if (user == 3)
        {
            cout << "You win: (Scissors cuts paper)." << endl;
        }
        else if (user == 2)
        {
            cout << "Tie." << endl;
        }
    }
    else if (computer == 3)
    {
        if (user == 1)
        {
            cout << "You win: (Rock smashes scissors)." << endl;
        }
        else if (user == 2)
        {
            cout << "Computer wins: (Scissors cuts paper)." << endl;
        }
        else if (user == 3)
        {
            cout << "Tie." << endl;
        }
    }

	

}
