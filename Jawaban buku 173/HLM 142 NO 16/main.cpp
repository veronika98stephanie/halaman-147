#include <iostream>

using namespace std;

int main()
{
    double  exemption = 5000,
            propertyValue,
            assessmentValue,
            seniorAssessmentValue,
            propertyTax,
            quarterlyBill,
            rate;

    cout << "Please input the property value " << endl;
    cin >> propertyValue;
    cout << "Please input senior rate " << endl;
    cin >> rate;

    assessmentValue = 60 * propertyValue / 100;
    seniorAssessmentValue = assessmentValue - 5000;
    propertyTax = rate * seniorAssessmentValue;
    quarterlyBill = propertyTax / 4;

    cout << "annual property tax $" << propertyTax << endl;
    cout << "quarterly tax bill $" << quarterlyBill << endl;

    return 0;
}
