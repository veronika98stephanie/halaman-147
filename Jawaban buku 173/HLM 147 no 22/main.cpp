#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double  angle;

    cout << "Please input the angle " << endl;
    cin >> angle;

    double  x = tan(angle),
            y = sin(angle),
            z = cos(angle);

    cout << setprecision (4) << fixed << showpoint << endl;
    cout << "The tangent is " << x << endl;
    cout << "The sine is " << y << endl;
    cout << "The cosine is " << z << endl;

    return 0;
}
