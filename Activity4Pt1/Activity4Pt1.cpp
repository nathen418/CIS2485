//Nate Goldsborough
//Activity 4 Pt1
//14.6.2020
//This program demonstrates the use of multiple functions


//libraries to include 
#include <iostream>
using namespace std;


// a fun little function i wrote
void aFunFunction() {

    cout << "This is from aFunFunction!" << endl;
}


//bid the user goodbye
void goodbyeMessage() {

    cout << "Goodbye! Thank you for running this program :)" << endl;

}

//main function
void main()
{
    cout << "This is from the main function" <<endl;

    //call other functions for output
    aFunFunction();
    goodbyeMessage();
}
