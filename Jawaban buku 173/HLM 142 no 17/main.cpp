#include <iostream>
#include <string>
#include <cstdlib>//for random
#include <ctime>//for time
#include <iomanip>

using namespace std;

int main()
{
    unsigned seed = time(0);
    srand (seed);

    int num1,
        num2,
        total,
        maxNum = 999,
        minNum = 100;

    num1 = (rand() % (maxNum - minNum + 1)) + minNum;
    num2 = (rand() % (maxNum - minNum + 1)) + minNum;

    cout << setw(5) << num1 << endl;
    cout << setw(5) << num2 << endl;
    cout << "+_____" << endl;
    cin >> total;

    if (total == num1+num2)
    {
        cout << "true" << endl;
    }else
    {
        cout << "wrong answer, the answer is " << num1+num2 << endl;
    }

    return 0;
}
