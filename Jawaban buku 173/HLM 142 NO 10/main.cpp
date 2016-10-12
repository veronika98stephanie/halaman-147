#include <iostream>

using namespace std;

int main()
{
    double percent = 80,
           cost;

    cout << "Input the replacement cost of a building" << endl;
    cin >> cost;
    cout << "The minimum amount of insurance he or she should buy for the property" << endl;
    cout << cost*percent/100;
    return 0;
}
