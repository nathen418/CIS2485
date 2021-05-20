//Nate Goldsborough
//Palindrome number checker
//Ativity 3-2

//indluded libraries
#include <iostream>

int main()
{
    //define vars
    int n = 0;
    int num = 0;
    int digit = 0;
    int rev = 0;

    //get input from user
    std::cout << "Enter a positive number: ";
    std::cin >> num;
    n = num;

    //do palindrome checking math magic :)
    do{
        digit = num % 10;
        rev = (rev * 10) + digit;
        num = num / 10;
    } while (num != 0);

    //print the output (reverse)
    std::cout << " The reverse of the number is: " << rev << std::endl;

    //optput if the number is a palindrome or not
    if (n == rev)
        std::cout << " The number is a palindrome.";
    else
        std::cout << " The number is not a palindrome.";

    return 0;
}
//Sample Output
//
//Enter a positive number : 12321
//The reverse of the number is : 12321
//The number is a palindrome.
//
//Enter a positive number : 12331
//The reverse of the number is : 13321
//The number is not a palindrome.