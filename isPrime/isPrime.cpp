//Nate Goldsborough
//Check if number is prime or not
//C++ class activity 5-3

//included libraries
#include <iostream>

//main function
int main() {

    //define vars
    int n, i;
    bool isPrime = true;

    //get input from user
    std::cout << "Enter a positive integer: ";
    std::cin >> n;


    //for loop to check division things to determine if number isPrime or not
    for (i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }
    //print the correct answer
    if (isPrime)
        std::cout << n << " is a prime number";
    else
        std::cout << n << " is not a prime number";

    return 0;
}
