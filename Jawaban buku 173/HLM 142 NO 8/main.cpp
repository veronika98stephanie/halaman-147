#include <iostream>

using namespace std;

int main()
{
    double weigh = 12.5,
           numberOfWidgets,
           total,
           pallet;

    cout << "How much the pallet weighs by itself ";
    cin >> pallet;
    cout << "Total weigh pallet with widget ";
    cin >> total;
    cout << "Number of widgets stacked on the pallet"<< endl;
    cout << ( total - pallet )/weigh;

    return 0;
}
