//Nate GOldsbortoufh
//2020-7-12
//Activity 9 Problem 1

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


struct taxPayer
{
    string name;
    long socialSecNum;
    float taxRate;
    float income;
    float taxes;
};



int main()
{
    //define citizen1
    taxPayer citizen1;
    citizen1.name = "Tim McGuiness";
    citizen1.socialSecNum = 255871234;
    citizen1.taxRate = 0.35;

    //define citizen1
    taxPayer citizen2;
    citizen2.name = "John Kane";
    citizen2.socialSecNum = 278990582;
    citizen2.taxRate = 0.29;

    //set cout options
    cout << fixed << showpoint << setprecision(2);

    // calculate taxes due for citizen1
    cout << "Please enter the year's income for " << citizen1.name <<": ";
    cin >> citizen1.income;
    citizen1.taxes = citizen1.income * citizen1.taxRate;

    //display taxes for citizen1
    cout << "Name: " << citizen1.name << endl;
    cout << "Social Security Number: " << citizen1.socialSecNum << endl;
    cout << "Taxes due for this year: $" << citizen1.taxes << endl << endl;

    // calculate taxes due for citizen2
    cout << "Please enter the year's income for " << citizen2.name << ": ";
    cin >> citizen2.income;
    citizen2.taxes = citizen2.income * citizen2.taxRate;


    //display taxes for citizen2
    cout << "Name: " << citizen2.name << endl;
    cout << "Social Security Number: " << citizen2.socialSecNum << endl;
    cout << "Taxes due for this year: $" << citizen2.taxes << endl << endl;
    return 0;
}
