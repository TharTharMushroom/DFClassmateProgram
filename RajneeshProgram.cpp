//Name: Devin Flanders
//Date: 9/24/24
//Prompt: Rajneesh
#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "What is your age? ";
    cin >> age;
    if (age >= 0 && age <= 30) {
        cout << "You are still young";
    }
    else if (age >= 31 && age <= 65) {
        cout << "Unc";
    }
    else {
        cout << "That's crazy";
    }
}