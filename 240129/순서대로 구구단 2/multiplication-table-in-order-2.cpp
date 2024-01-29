#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    for (int i = 1; i <= 9; i+=3) {
        for (int j = i; j < i+3; j++) {
            cout << a << " * " << j << " = " << a * j<< "  ";
        }
        cout << '\n';
    }
    cout << '\n';

    for (int i = 1; i <= 9; i+=3) {
        for (int j = i; j < i+3; j++) {
            cout << b << " * " << j << " = " << b * j << "  ";
        }
        cout << '\n';
    }
}