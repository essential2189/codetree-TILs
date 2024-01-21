#include <iostream>

using namespace std;

int main() {
    int a;
    cin >> a;

    int b, c, d, e;
    cin >> b >> c >> d >> e;

    if (a > b) {
        cout << 1 << '\n';
    } else {
        cout << 0 << '\n';
    }

    if (a > c) {
        cout << 1 << '\n';
    } else {
        cout << 0 << '\n';
    }

    if (a > d) {
        cout << 1 << '\n';
    } else {
        cout << 0 << '\n';
    }

    if (a > e) {
        cout << 1;
    } else {
        cout << 0;
    }
}