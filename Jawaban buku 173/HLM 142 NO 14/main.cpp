#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    string  month;

    int statetax = 4,
        countytax = 2;

    double stateSalesTax,
           countySalesTax;

    double  salesTaxCollected,
            productSales,
            totalAmountCollected,//sales + salestax
            totalIncome;

    cout << "Please enter the month " << endl;
    cin >> month;
    cout << "Please enter the total amount collected" << endl;
    cin >> totalAmountCollected;

    productSales = totalAmountCollected/1.06;

    salesTaxCollected = totalAmountCollected - productSales;
    stateSalesTax = (4*productSales)/100;
    countySalesTax = (2*productSales)/100;

    cout << "Month : " << month << endl;
    cout << "-----------------------" << endl;
    cout << fixed << setprecision(2) << showpoint;
    cout << setw (30) << left << "total collected:" << "$"<< totalAmountCollected << endl;
    cout << setw (30) << left << "Sales:" << "$"<< totalAmountCollected-salesTaxCollected << endl;
    cout << setw (30) << left << "County Sales Tax:" << "$"<< countySalesTax << endl;
    cout << setw (30) << left << "State Sales Tax:" << "$"<< stateSalesTax << endl;
    cout << setw (30) << left << "Total Sales Tax:" << "$" << countySalesTax+stateSalesTax << endl;


    return 0;
}
