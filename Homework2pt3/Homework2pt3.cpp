//Nate Goldsborough
//2020-6-21
//sort 5 floats that the user inputs

#include <iostream>
using namespace std;

void sorting(float num0, float num1, float num2, float num3, float num4) {

    if (num1 < num0)
        swap(num1, num0);
    if (num2 < num1) {
        swap(num2, num1);
        if (num1 < num0)
            swap(num1, num0);
    }
    if (num3 < num2) {
        swap(num3, num2);
        if (num1 < num0)
            swap(num1, num0);
        if (num2 < num1) {
            swap(num2, num1);
            if (num1 < num0)
                swap(num1, num0);
        }
    }
    if (num4 < num3) {
        swap(num4, num3);
        if (num3 < num2) {
            swap(num3, num2);
            if (num1 < num0)
                swap(num1, num0);
            if (num2 < num1) {
                swap(num2, num1);
                if (num1 < num0)
                    swap(num1, num0);
            }
        }
    }

    //output results
    cout << "Output number: " << num0 << endl;
    cout << "Output number: " << num1 << endl;
    cout << "Output number: " << num2 << endl;
    cout << "Output number: " << num3 << endl;
    cout << "Output number: " << num4 << endl;
}

void main() {
    //define vars and gc
    float num1 = 0.0;
    float num2 = 0.0;
    float num3 = 0.0;
    float num4 = 0.0;
    float num5 = 0.0;

    //get input from user
    cout << "Input number 1: ";
    cin >> num1;
    cout << "Input number 2: ";
    cin >> num2;
    cout << "Input number 3: ";
    cin >> num3;
    cout << "Input number 4: ";
    cin >> num4;
    cout << "Input number 5: ";
    cin >> num5;


    //send numbers to be sorted
    //i should really be consistant in my var naming scheme
    sorting(num1, num2, num3, num4, num5);
}