#include <iostream>

using namespace std;

int main()
{
    double  acreValue = 10000,
            assesmentValue = 60,
            propertyTax = 0.75,
            actualValue,
            totalAssesmentValue;


    cout << "Please enter the property value " << endl;
    cin >> actualValue;
    totalAssesmentValue = assesmentValue * actualValue /100;
    cout << "The assesment value is " << totalAssesmentValue << endl;
    cout << "Property tax " << totalAssesmentValue/100 * propertyTax << " cents" << endl;

    return 0;
}
