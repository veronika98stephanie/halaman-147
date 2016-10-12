#include <iostream>

using namespace std;

int main()
{
    string  name,
            city,
            college,
            profession,
            animal,
            petName;
    int age;

    cout << "Please enter the name, age, city, college, profession, animal, Pet's name, and age" << endl;
    cin >> name >> age >> city >> college >> profession >> animal >> petName;
    cout << "There once was a person named " << name << " who lived in " << city << ". At the age of" <<
            age << ", " << name << " went to college at " << college << ". " << name
            << "graduated and went to work as a " <<  profession << ". Then, " << name << " adopted a(n) " << animal << " named "
            << petName << ". They both lived happily ever after!";

    return 0;
}

