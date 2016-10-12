#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double  diameter,
            radius,
            area,
            nSlices;
    const double pi = 3.14159;

    cout << "Please input the diameter in inches " << endl;
    cin >> diameter;

    radius = diameter/2;

    area = pi * radius * radius;

    nSlices = area/14.125;

    cout << fixed << showpoint << setprecision(1) << endl;
    cout << "Number of slices = " << nSlices << endl;

    return 0;
}
