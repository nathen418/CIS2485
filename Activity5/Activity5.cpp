//Nate Goldsborugh
//2020-6-21
//Activity 5
// This program will demonstrate how to use decision 
// statements in C++  
// This program determines if a bonus should be 
// awarded


#include <iostream>
using namespace std;

// This function gets the monthly sales
float getSales()
{
    float sales;
    cout << "Enter the monthly sales $ ";
    cin >> sales;
    return sales;
}

void isBonus(float monthlySales)
{
    if (monthlySales >= 100000)
    {
        cout << "You have earned a $5,000 bonus!!!" << endl;
    }
}

bool allDayOff(float monthlySales) {
    if (monthlySales == 1.25 * 90000) {
        return true;
    }
    return false;
}

// The main function
int main()
{
    cout << "Welcome to the bonus awarding program!" << endl;
    float monthlySales = getSales();

    // Function call to determine bonus
    isBonus(monthlySales);

    if (allDayOff(monthlySales)) {
        cout << "All employees get a day off!" << endl;
    }

    return 0;
}

