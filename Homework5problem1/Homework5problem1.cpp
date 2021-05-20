//Nate Goldaborough
//2020-7-5
//Homework 5 Problem 1


#include <iostream>
using namespace std;


double calcValue1(double x)
{
    return 2 * x + 8;
}
double derivative1(double x)
{
    return 20;
}
double calcValue2(double x)
{
    return x * x - 5 * x + 5;
}
double derivative2(double x)
{
    return 2;
}
void getroot(double x)
{
    double k = calcValue2(x) / (1.0 * derivative2(x));
    double d = calcValue1(x) / (1.0 * derivative1(x));
    double y = x;
    while (abs(d) >= 0.001)
    {
        d = calcValue1(x) / (1.0 * derivative1(x));
        x -= d;
    }
    //print root of 2nd Function
    cout << "Root for 1st function is: " << x << "\n";
    d = k;
    x = y;
    while (abs(d) >= 0.001)
    {
        d = calcValue2(x) / (1.0 * derivative2(x));
        x -= d;
    }

    //print root of 2nd Function
    cout << "Root for 2nd function is: " << x << " " << (3 / x) << "\n";
}
int main()
{
    getroot(-10000);
}