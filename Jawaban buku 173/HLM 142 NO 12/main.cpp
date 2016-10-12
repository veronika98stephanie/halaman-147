#include <iostream>

using namespace std;

int main()
{
    double  celsius,
            fahrenheit;

    cout << "Input the celcius" << endl;
    cin >> celsius;

    fahrenheit = (9 * celsius)/5 + 32;

    cout << "The fahrenheit is " << endl;
    cout << fahrenheit;
    return 0;
}
