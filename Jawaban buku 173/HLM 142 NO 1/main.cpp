#include <iostream>

using namespace std;

int main()
{
    double  gallons,
            miles,
            MPG;

    cout << "Please enter the number of gallons of gas the car can hold " << endl;
    cin >> gallons;
    cout << "Please enter the number of miles it can be driven on a full tank" << endl;
    cin >> miles;

    MPG = miles/gallons;

    cout << "The number of miles that may be driven per gallon of gas " << MPG <<endl;
    return 0;
}
