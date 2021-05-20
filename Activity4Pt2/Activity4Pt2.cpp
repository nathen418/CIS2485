//Nate Goldsborough
//Activity 4 pt2
//14.6.2020
// This program demonstrates the use of multiple functions

#include <iostream>
#include <string>
using namespace std;

//get users age
string inputName()
{
    string name;
    cout << "Enter your first name: " << endl;
    cin >> name;
    return name;
}
//get users input
int inputAge() {

    int age;
    cout << "This is awkward, but I have to ask you for your age... Sorry. Please enter it here: " << endl;
    cin >> age;
    return age;
}

//main function
int main()
{
    std::cout << "Hello and Welcome to my fancy program!" << endl;
    string name = inputName();
    cout << "Well hi there " << name << ", thank you for running this program :)" << endl;
    int age = inputAge();
    cout << "Hmm, well you entered your age so I guess I have to display it now. You are " << age << " years old. WOW! Good job on surviving this long!" << endl;
}

