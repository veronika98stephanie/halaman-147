#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float   sugar = 1.5,
            butter= 1,
            flour= 2.75,
            cookies = 48,
            nSugarCookies = sugar / cookies,
            nButterCookies = butter / cookies,
            nFlourCookies = flour / cookies,
            number;

    cout << "Number of cookies that you want to make "<< endl;
    cin >> number;
    cout << fixed << setprecision (2) << endl;
    cout << " The amount of sugar needed " << nSugarCookies*number << " cups" << endl;
    cout << " The amount of butter needed " << nButterCookies*number << " cups" << endl;
    cout << " The amount of flour needed " << nFlourCookies*number << " cups" << endl;

    return 0;
}
