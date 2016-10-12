#include <iostream>

using namespace std;

int main()
{
    int cookies = 30,
        serving = 10,
        calories = 300,
        eaten,
        caloriesConsumed,
        totalCalories,
        perServing,
        percookies;

        perServing = cookies/serving;
        percookies = calories/perServing;

        cout << "How many cookies that you want to eat?" << endl;
        cin >> eaten;
        cout << "The total calories is " << percookies*eaten << endl;


    return 0;
}
