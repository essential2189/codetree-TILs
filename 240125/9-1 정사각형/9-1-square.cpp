#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int a = 9;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a;
            a--;

            if (a == 0) {
                a = 9;
            }
        }
        cout << '\n';
    }
}