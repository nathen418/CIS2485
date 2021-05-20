//Nate Goldsborough
//2020/6/26
//Exam 1 Problem 1

//Develop a C++ program that performs some basic trigonometric mathematics
//
//Prompt the user to input a double value as a number of DEGREES
//
//No input validation is required
//Convert that number from degrees to RADIANS using this formula:
//
//RADIANS = DEGREES * PI / 180.0
//PI = 3.14159265359
//Display the COSINE value using the radians value you just computed
//
//Display the SINE value using the radians value you just computed
//
//Display the value of(COSINE* COSINE) + (SINE * SINE)

#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;




int main()
{
    //define vars and gc
    double val1 = 0.0;

    //get input from user
    cout << "Hey user, Please input a number of degreees as a double: ";
    cin >> val1;

    //convert degrees to radians
    val1 = val1 * M_PI / 180;


    //print calculations to the console
    cout << "This is the COSINE value of the degrees you just entered: " << cos(val1) << endl;
    cout << "This is the SINE value of the degrees you just entered:   " << sin(val1) << endl;
    cout << "this is the value of --> COSINE^2 + SINE^2 (Should be 1): " << (cos(val1) * cos(val1) + sin(val1) * sin(val1)) << endl;
}
