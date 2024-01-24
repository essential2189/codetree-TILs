#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = n; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            cout << '*';
        }

        for (int s = n; s > i; s--) {
            cout << "  ";
        }

        for (int j = 0; j < i; j++) {
            cout << '*';
        }

        cout << '\n';
    }
}