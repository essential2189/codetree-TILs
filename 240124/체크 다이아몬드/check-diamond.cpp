#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n-i; j++) {
            cout << ' ';
        }

        for (int k = 0; k < i-1; k++) {
            cout << "* ";
        }
        cout << '*';

        cout << '\n';
    }

    for (int i = 1; i <= n-1; i++) {
        for (int j = 0; j < i; j++) {
            cout << ' ';
        }

        for (int k = 0; k < n-i-1; k++) {
            cout << "* ";
        }
        cout << '*';

        cout << '\n';
    }
}