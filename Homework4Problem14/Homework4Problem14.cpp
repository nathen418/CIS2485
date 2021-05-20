//Nate Goldsborough
//2020-6-25
//Homework 4 problem 14
//Array: {5,3,2,4,1,9,6,7,0,8} Iterate array and print sum of each of the adjacent pair of numbers.... 8,5,6,5,10,...
//Iterate using a loop structure of your choice to print out the correct numbers as required

#include <iostream>
using namespace std;



int main()
{
    
    //define array
    int a[] = { 5, 3, 2, 4, 1, 9, 6, 7, 0, 8};

    //setup for loop to iterate thru array
    for (int i = 0; i <= 9; i++) {
        if (i == 9) {
          //print nothing here because if the program ever gets inside this loop there isnt anything at the end of the array and it will step out of bounds  
        }
        else {
            //print sums of adjacent numbers
            cout << a[i] + a[i + 1] << endl;
        }

    }




}