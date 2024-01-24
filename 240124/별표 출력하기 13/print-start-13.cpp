#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int a, b;
    if (n % 2 == 0) {
        a = n / 2;
        b = n / 2;
    } else {
        a = n / 2;
        b = n / 2 + 1;
    }

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < n-i; j++) {
            cout << "* ";
        }
        cout << '\n';

        for (int k = 0; k <= i; k++) {
            cout << "* ";
        }
        cout << '\n';
    }

    for (int i = b; i > 0; i--) {
        for (int k = 0; k < i; k++) {
            cout << "* ";
        }
        cout << '\n';

        for (int j = 0; j < n-i+1; j++) {
            cout << "* ";
        }
        cout << '\n';
    }
}