//Nate Goldsborough
//6/12/2020
// check if a number is: 
//Is a three digit number
//Is odd
//Is divisible by 3
//and Is divisible by 7


#include <iostream>
#include <string>
using namespace std;


//perform checks on the user generated number
bool isEglaf(int value) {
    if (to_string(value).length() != 3) {
        return false;
    } else if (remainder(value, 2) == 0) {
        return false;
    } else if (remainder(value, 3) != 0) {
        return false;
    } else if (remainder(value, 7) != 0) {
        return false;
    } else if (((value / 100) % 10) > ((value / 10) % 10) > (value % 10)) {
        return true;
    } else {
        return true;
    }
}


int main()
{
    //for (int i = 100; i < 1000; i++) {

    //    if (isEglaf(i)) {
    //        cout << "YES  ---  " << i << endl;
    //    }
    //}

    //define vars and gc
    int val = 0;
    cout << "Please enter a 3 digit number: ";
    cin >> val;

    if (isEglaf(val)) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}