//Nate Goldaborough
//Homework2
//19/6/2020
//This program calculates the number of calories a person can burn by walking

#include <iostream>
using namespace std;

int main()
{
    //define vars
    int stepsInMile;
    int stepsInday;
    int caloriesInMile;

    //get user input
    cout << "Welcome to my awesome program that calculates the number of calories a person can burn by walking" << endl;
    cout << "Please enter the number or your steps equals one mile of walking to the nearest whole humber: ";
    cin >> stepsInMile;
    cout << "please enter the number of calories that you burn in one mile of walking; ";
    cin >> caloriesInMile;
    cout << "Please enter the number of steps you walked today: ";
    cin >> stepsInday;

    //calculate and print results
    cout << "You walked " << (stepsInday / stepsInMile) << " miles and burned " << (stepsInday / stepsInMile) * caloriesInMile << " calories today.";



}
