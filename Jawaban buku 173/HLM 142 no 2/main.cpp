#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double  classa = 15,
            classb = 12,
            classc = 9,
            na,
            nb,
            nc;

    cout << "Please insert the number of tickets a that will be sold " << endl;
    cin >> na;
    cout << "Please insert the number of tickets b that will be sold " << endl;
    cin >> nb;
    cout << "Please insert the number of tickets c that will be sold " << endl;
    cin >> nc;

    cout << setprecision(2) << fixed << showpoint << right;
    cout << "Total amount from ticket a $";
    cout << na*classa << endl;
    cout << "Total amount from ticket a $";
    cout << nb*classb << endl;
    cout << "Total amount from ticket a $";
    cout << nc*classc << endl;

    cout << "Total $" << na*classa + nb*classb + nc*classc;

    return 0;
}
