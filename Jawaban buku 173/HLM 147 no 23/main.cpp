#include <iostream>

using namespace std;

int main()
{
    double  numberOfShare = 1000,
            stockPurchase = 45.50,
            amountPaid = numberOfShare * stockPurchase,
            commission1 = 2 * amountPaid/100,
            amountGot = 1000 * 56.90,
            commission2 = 2 * amountGot/100,
            profit = amountGot - commission1 - commission2 - amountPaid;

    cout << "Amount of money that Joe Paid for the stock $" << amountPaid << endl;
    cout << "The commission Joe paid his broker when he bought the stock $" << commission1 << endl;
    cout << "The amount that Joe sold the stock for $" << amountGot << endl;
    cout << "The amount of commission Joe paid his broker when he sold the stock $" << commission2 << endl;
    cout << "The amount of profit that Joe made after selling his stock and paying the two commissions to his broker. $"
         << profit << endl;
    return 0;
}
