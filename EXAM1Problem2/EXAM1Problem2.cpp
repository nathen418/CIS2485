//Nate Goldsborough
//2020/6/26
//Exam 1 Problem 2

//Develop a C++ program that prompts the user for an integer value
//No input validation is required
//
//For multiples of three(3, 6, 9, 12, 15, ...) display “Smurf”
//
//For multiples of five(5, 10, 15, 20, 25, ...) display “Berries”
//
//For numbers which are multiples of BOTH three AND five display “Such Smurfiness”
//
//For numbers which are NOT multiples of three OR five, display "Oh Gargamel"
//
//HINT:  Look into the modulus operator to determine if a number is a multiple of another

#include <iostream>
using namespace std;


int main()
{
    //define vard and gc
    int val1 = 0;

    //get input from user
    cout << "Please input an Integer numer here: ";
    cin >> val1;

    //check if the number is a multiple of 3
    if (val1 % 3 == 0)
        cout << "Smurf" << endl;

    //check if the numer is a multiple of 5
    if (val1 % 5 == 0)
        cout << "Berries" << endl;

    //check if number is a multiple of 3 AND 5
    //[The if statement is written this way to avoid a short circut if it was written like: if(val1 % 3 == 0 && val1 % 5 == 0)]
    if (val1 % 3 == 0) {
        if (val1 % 5 == 0) {
            cout << "Such Smurfiness" << endl;
        }
    } else if (val1 % 5 != 0){
    //if numbers are not a multiple of 3 OR five
        cout << "Oh Gargamel" << endl;
    }

}
