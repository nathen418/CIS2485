//Nate Goldsborough
//2020-7-4
//Activity 7
//this program gets some random user generated numbers and adds them using a loop
//it also checks after each loop if the user wants to continue entering numbers.
//Then it gets some user generated ages, checks if they are in the range [0,122] and then finds
//the average of the ages
#include<iostream>
#include <string>

using namespace std;



void main()
{
    //define vars and gc
    int number = 0;
    int age = 0;
    int totalAge = 0;
    int averageAge = 0;
    int total = 0;
    bool cont = true;


    //accumulate random user generated numbers
    while (cont) {
        string inp = "";
        int n;
        for (int i = 0; i < 5; ++i)
        {
            cout << "Enter some random number" << endl;
            cin >> n;

            total = total + n;
        }
        cout << "The toal is " << total << endl;




        cout << "End program ? (Enter no or yes) : ";
        cin >> inp;
        while ((inp != "yes") && (inp != "no"))
        {
            cout << "Please enter a yes or no\n";
            cout << "End program ? (Enter no or yes) : ";
            cin >> inp;
        }
        if (inp == "no") {
            cont == false;
            cout << "--no";
            cout << cont;
        }
        else {
            cont == true;
            cout << "--yes";
        }
    }

    
    //get user generated number and accumulate the ages that they provide
    cout << "How many ages do you want to find the average of: ";
    cin >> number;

    //loop thru the age list
    for (int i = 0; i < number; ++i)
    {
       /* cout << "Enter an age : ";
        cin >> age;
        totalAge += age;*/

        cout << "Enter an age : ";
        cin >> age;
        while ((age < 0) || (age > 122))
        {
            cout << "Please enter a number between 0 and 122\n";
            cout << "Enter a number between 0 and 122: ";
            cin >> age;
        }
        totalAge += age;

    }
    averageAge = totalAge / number;
    cout << "The average age is " << averageAge;
}