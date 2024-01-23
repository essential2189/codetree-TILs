#include <iostream>

using namespace std;

int main() {
    int count = 0;
    int sum = 0;

    while (true) {
        int i;
        cin >> i;

        if (i < 20 || i > 29) {
            break;
        }

        count++;
        sum += i;
    }

    cout << fixed;
    cout.precision(2);
    cout << (float)sum / (float)count;
}