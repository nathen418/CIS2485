//Nate goldsborough
//6/12/2020
//this program checks if a number: 
//Is a two digit number
//Is even
//Is divisible by 7
//and The sum of the two individual digits is an odd number


#include <iostream>
#include <string>
using namespace std;


//perform checks on a user generated value
bool isEpiphinot(int value) {
    //check if even
    if (remainder(value, 2) != 0) {
        return false;
    }
    //check if divisible by 7
    else if (remainder(value, 7) != 0) {
        return false;
    }
    //check if 2 digits
    else if (to_string(value).length() != 2) {
        return false;
    }
    //check if both digits add up to an odd number
    else if (remainder(((value % 10) + (value / 10) % 10), 2) == 0) {
        return false;
    }
    else {
        return true;
    }
}



int main()
{

    //define vars
    int val = 0; //  14, 56, etc

    //get user input
    cout << "Please enter an integer value: ";
    cin >> val;

    //check number and output answer
    if (isEpiphinot(val)) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

  /*  cout << to_string(val).length();
    cout << remainder(val, 2);
    cout << remainder(val, 7);
    cout << remainder(((val % 10) + (val / 10) % 10),2);*/
}

