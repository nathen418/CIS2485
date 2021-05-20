#include <iostream>
using namespace std;


void main()
{
    //define vars and gc
    int a = rand() % 10;
    int b = rand() % 10;
    int c = rand() % 10;
    int d = rand() % 10;
    bool testa = false;
    bool testb = false;
    bool testc = false;
    bool testd = false;
    bool teste = false;
    bool testf = false;

    if (a == 0)
        a = 1;
    if (b == 0)
        b = 1;
    if (c == 0)
        c = 1;
    if (d == 0)
        d = 1;
   


    //A vs B, A vs C, A vs D, B vs C, B vs D, C vs D
    if (a == b)
        testa = true;
    if (a == c)
        testb = true;
    if (a == d)
        testc = true;
    if (b == c)
        testd = true;
    if (b == d)
        teste = true;
    if (c == d)
        testf = true;

    if (testa && testb && testc && testd && teste && testf) {
        cout << "4 of a kind" << endl;
    }



   // cout << a << " " << b << " " << c << " " << d << " ";
}
//grrrrrrrr i cant figure it out