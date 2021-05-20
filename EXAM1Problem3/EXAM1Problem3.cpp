//Nate Goldsorough
//2020/6/26
//Exam 1 Problem 3
//Develop a C++ program which will play a simplified version of the dice gameYahtzee
//For simplicity, this version of the game only uses four dice
//
//No prompting of the user for input values is required
//Simply use four variables called A, B, C, D to maintain dice roll values
//
//int A = 2;
//No input validation is required as well
//
//From the input you will determine if the player rolled 4 of a kind, 3 of a kind, 2 pair, 1 pair, or nothing
//
//Compare each of the four values against each other value exactly once.A vs B, A vs C, A vs D, B vs C, B vs D, C vs D
//This means you will have six total comparisons to make
//For a given comparison test that both values are equal to one another
//
//You can determine the result of the roll using the following logic :
//
//If all 6 of your comparisons are equal to one another, then you have a 4 of a kind
//If exactly 3 of your comparisons are equal to one another, then you have a 3 of a kind
//If exactly 2 of your comparisons are equal to one another, then you have two pair
//If exactly 1 of your comparisons are equal to one another, then you have one pair
//If none of your comparisons are equal to one another, then you have nothing
//Display the result of the roll after you have computed it as described
//
//EXAMPLE : 1 1 3 2  is one pair
//EXAMPLE : 1 3 3 3  is 3 of a kind
//EXAMPLE : 5 5 5 5  is 4 of a kind
//EXAMPLE : 1 3 3 1  is two pair
//EXAMPLE : 1 2 3 6  is nothing
#include <iostream>
using namespace std;


void main()
{
    //define vars and gc
    int a = rand() / 10;
    int b;
    int c;
    int d;


    srand(1);
    for (int i = 0; i < 5; i++)
        cout << rand() % 100 << " ";
  
}