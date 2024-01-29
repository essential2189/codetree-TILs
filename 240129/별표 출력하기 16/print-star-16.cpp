#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;

    int num = pow(n, 2);

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < pow(n, 2) - num; j++) {
            cout << ' ';
        }

        for (int j = num; j > 0; j--) {
            cout << '*';
        }
        cout << '\n';

        num = (n - i) * (n - i);
    }
}