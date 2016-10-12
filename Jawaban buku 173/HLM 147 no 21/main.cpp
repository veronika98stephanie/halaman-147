#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int nPeople,
        nPizza;

    double  diameter,
            radius,
            area,
            nSlices;
    const double pi = 3.14159;

    cout << "Please enter number of people that will eat the pizza " << endl;
    cin >> nPeople;
    cout << "Please input the diameter in inches " << endl;
    cin >> diameter;

    radius = diameter/2;

    area = pi * radius * radius;

    nSlices = area/14.125;

    cout << fixed << showpoint << setprecision(1) << endl;
    cout << "Number of slices = " << nSlices << endl;

    nPizza = nSlices/4*nPeople;

    cout << "Pizza that you will need to buy " << nPizza << " slice(s) " << endl;

    return 0;
}

