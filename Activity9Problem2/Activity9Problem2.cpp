//nate Goldsborough
//2020-7-12
//Activity 9 Problem 2
// This program demonstrates how to use an array of structures

#include <iostream>
#include <iomanip>
using namespace std; 

struct taxPayer {
    float taxRate;
    float income;
    float taxes;
};

int main()
{
    //define array of citizens
    taxPayer citizen[4];

    //set cout options
    cout << fixed << showpoint << setprecision(2);
    
    //tell the user what to do
    cout << "Please enter the annual income and tax rate for 5 tax payers: ";
    cout << endl << endl << endl;


    

    //enter all of the taxpayer info
    for (int count = 0; count < 5; count++)
    {
        cout << "Enter this year's income for tax payer " << (count + 1);
        cout << ": ";
        cin >> citizen[count].income;

        cout << "Enter the tax rate for tax payer # " << (count + 1);
        cout << ": ";
        cin >> citizen[count].taxRate;
        // Fill in code to read in the tax rate to the appropriate place
        citizen[count].taxes = citizen[count].income * citizen[count].taxRate;
        // Fill in code to compute the taxes for the citizen and store it
        // in the appropriate place
        cout << endl;
    }
    cout << "Taxes due for this year: " << endl << endl;
    // Fill in code for the first line of a loop that will output the
    // tax information
    for(int index = 0; index < 5; ++index){
        cout << "Tax Payer # " << (index) << ": " << "$ " << citizen[index].taxes << endl;
    }
}
