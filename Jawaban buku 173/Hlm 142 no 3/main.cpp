#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int size = 5,
        score[size],
        total = 0;

    double average;

    for (int i = 0 ; i < size ; i++)
    {
        cout << "Please input the " << i+1 << " score " << endl;
        cin >> score[i];
    }

    for (int i = 0 ; i < size ; i++)
    {
        total += score[i];
    }

    average = total/size;

    cout << "The average of your score is ";
    cout << setprecision (1) << fixed << showpoint << average << endl;

    return 0;
}
