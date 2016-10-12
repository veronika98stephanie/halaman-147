#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double principal,
           interestRate,
           time,
           amount,
           insideBracket;

    cout << "Please enter the principal " << endl;
    cin >> principal;
    cout << "Please enter the interest rate " << endl;
    cin >> interestRate;
    cout << "Please enter the time " << endl;
    cin >> time;

    insideBracket = 1+interestRate/time/100;
    amount = principal * pow(insideBracket, time);

    cout << left << setw(20) << "Interest Rate " << interestRate << "%" << endl;
    cout << left << setw(20) << "Times Compounded" << time << endl;
    cout << left << setw(20) << "Principal"  << "$" << principal << endl;
    cout << left << setw(20) << "Interest"  << "$" << amount-principal << endl;
    cout << left << setw(20) << "Amount in Savings"  << "$" << amount << endl;

    return 0;
}

