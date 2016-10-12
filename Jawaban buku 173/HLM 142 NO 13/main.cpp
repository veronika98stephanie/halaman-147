#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const float yen = 98.93,
                euros = 0.74;
    float dollar;

    cout << "Please input the amount of dollars " << endl;
    cin >> dollar;
    cout << fixed << showpoint << setprecision(2) << endl;
    cout << "Yen " << dollar*yen <<endl;
    cout << "Euros " << dollar*euros << endl;

    return 0;
}
