//Nate Goldsborough
//6/21/2020
// this program checks if a usercan buy a gift with a given budget

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //define vars and gc
    float stateTaxRate = 0.1025;
    float countyTaxRate = 0.0125;
    float priceOfGift = 0;
    float maxMoneySpent = 0;
    float totalSalesTax = 0;
    float grandTotal = 0;
    bool canBeBought = false;

    //get user input
    cout << "What is the price of the gift? ";
    cin >> priceOfGift;
    cout << "what is the amout you ware willing to spend on a gift? ";
    cin >> maxMoneySpent;

    //calculate output
    totalSalesTax = stateTaxRate * priceOfGift + countyTaxRate * priceOfGift;
    grandTotal = priceOfGift * stateTaxRate + priceOfGift * countyTaxRate + priceOfGift;
    if (maxMoneySpent >= priceOfGift)
    {
        canBeBought = true;
    }

    //output
    cout << "+-----------------------------------------------------+" << endl;
    // cout << "+------------ County sales tax: " (countyTaxRate * priceOfGift) << endl;
   //  cout << "+------------ State sales tax:  " << (stateTaxRate * priceOfGift) << endl;
   //  cout << "+------------ Total sales tax:  " << totalSalesTax << endl;
   //  cout << "+------------ Price of item:    " << priceOfGift << endl;
    printf("+------------ County sales tax: $%.2f\n", (countyTaxRate * priceOfGift));
    printf("+------------ State sales tax : $%.2f\n", (stateTaxRate * priceOfGift));
    printf("+------------ Total sales tax : $%.2Lf\n", totalSalesTax);
    printf("+------------ Grand total     : $%.2Lf\n", grandTotal);
    if (canBeBought) {
        printf("+------- Can be bought in budget? Yes");
    }
    else {
        printf("+------- Can be bought in budget? No");
    }
}