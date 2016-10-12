#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
 double rate,
        annualInterest,
        monthlyInterest,
        N,//number of payment
        L,//amount of loan
        amountPayBack,
        InterestPay,
        something,
        payment;

    cout << "Please enter the loan " << endl;
    cin >> L ;
    cout << "Please enter the number of payment " << endl;
    cin >> N ;
    cout << "Please enter the annual interest" << endl;
    cin >> annualInterest;

    monthlyInterest = annualInterest/12;
    rate = monthlyInterest/100;
    something = pow (1+rate,N);
    payment = rate * something/(something-1)*L;
    InterestPay = payment*N;

    cout << fixed << showpoint << setprecision(2);

    cout << left << setw(20) << "Loan amount "  << "$" << L << endl;
    cout << left << setw(20) << "Monthly Interest Rate " << monthlyInterest << "%" << endl;
    cout << left << setw(20) << "Number of payment " << N << endl;
    cout << left << setw(20) << "Monthly payment"  << "$" << payment << endl;
    cout << left << setw(20) << "Amount paid back"  << "$" << InterestPay << endl;
    cout << left << setw(20) << "Interest paid"  << "$" << InterestPay-L << endl;

    return 0;
}
