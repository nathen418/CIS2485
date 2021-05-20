//Nate Goldsborough
//Largest element in array
//Activity 7-2

//included libraries
#include <iostream>


int main()
{
    //define vars
    int i;
    int n;
    float arr[100];

    //get user input
    std::cout << "Enter total number of elements(1 to 100): ";
    std::cin >> n;
    std::cout << std::endl;
    

    // Store number entered by the user
    for (i = 0; i < n; ++i)
    {
        std::cout << "Enter Number " << i + 1 << " : ";
        std::cin >> arr[i];
    }

    // Loop to store largest number to arr[0]
    for (i = 1; i < n; ++i)
    {
        // Change < to > if you want to find the smallest element
        if (arr[0] < arr[i])
            arr[0] = arr[i];
    }
    std::cout << "Largest element = " << arr[0];

    return 0;
}