#include <iostream>

using namespace std;

int main()
{
    double  loanPayment,
            inscurance,
            gas,
            oil,
            tires,
            maintenance,
            total;

    cout << "enter the monthly costs for the following expenses" <<
            " incurred from operating his or her automobile: loan" <<
            "payment, insurance, gas, oil, tires, and maintenance." <<endl;
    cin >> loanPayment >> inscurance >> gas >> oil >> tires >> maintenance;

    total = loanPayment + inscurance + gas + oil + tires + maintenance;

    cout << "Total monthly" << endl;
    cout << total;
    cout << "Total annual" << endl;
    cout << total * 12;
    return 0;
}
