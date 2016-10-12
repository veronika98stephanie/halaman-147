#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    string  name;
    double  adultTicket = 10,
            childTicket = 6,
            nAdult,
            nChild,
            gross,
            net,
            distributor;

    cout << "Please input the movie's name " << endl;
    getline (cin, name);
    cout << "Please input the number of adult tickets that have been sold " << endl;
    cin >> nAdult;
    cout << "Please input the number of children tickets that have been sold " << endl;
    cin >> nChild;

    gross = (adultTicket*nAdult)+(childTicket*nChild);
    net = gross*20/100;

    cout << setw(30) << left << "Movie name :" << setw(10) << left << "\"" << name << "\""<< endl;
    cout << setw(30) << left <<"Adult Tickets Sold:" << setw(10) << left << nAdult*adultTicket << endl;
    cout << "Child Tickets Sold:" << setw(10) << left << nChild*childTicket << endl;
    cout << fixed << showpoint << setprecision(2);
    cout << setw(30) << left << "Gross Box Office Profit:" << setw(10) << left <<  " $ " << gross << endl;
    cout << setw(30) << left << "Net Box Office Profit:" << setw(10) << left << " $ " << net << endl;
    cout << setw(30) << left << "Amount Paid to Distributor:" << setw(10) << left << " $ " << gross - net << endl;
    return 0;
}
