#include <iostream>

using namespace std;

int main()
{
    string  months[3];
    double inches[3];

    for ( int i = 0; i < 3; i++)
    {
        cout << "Please input the months and inches of rain falls " << endl;
        cin >> months[i];
        cin >> inches[i];
    }

    for ( int i = 0; i < 3; i++)
    {
        cout << "In " << months[i] << ", rain falls " << inches[i] << " inches" << endl;
    }
    return 0;
}
