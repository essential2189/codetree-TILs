#include <iostream>

using namespace std;

int main() {
    int age1, age2;
    char gender1, gender2;

    cin >> age1 >> gender1;
    cin >> age2 >> gender2;

    if ((age1 >= 19 && gender1 == 'M') || (age2 >= 19 && gender2 == 'M')) {
        cout << 1;
    } else {
        cout << 0;
    }
}