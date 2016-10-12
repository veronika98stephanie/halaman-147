#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double  males,
            females,
            totalStudent;

    cout << "Please enter number of males in class" << endl;
    cin >> males;
    cout << "Please enter number of females in class" << endl;
    cin >> females;

    totalStudent = males + females;

    cout << setprecision (2) << fixed ;

    cout << "The percentage of male is " << males/totalStudent << "%" << endl;
    cout << "The percentage of female is " << females/totalStudent << "%" << endl;
    return 0;
}
