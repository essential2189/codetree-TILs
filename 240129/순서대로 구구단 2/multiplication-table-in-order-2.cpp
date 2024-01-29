#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    if (a > b) {
        for (int i = a; i >= b; i--) {
            for (int k = 1; k <= 9; k+=3) {
                for (int n = k; n < k+3; n++) {
                    cout << i << " * " << n << " = " << i * n << "  ";
                }
                cout << '\n';
            }
            cout << '\n';
        }
    } else {
        for (int i = a; i <= b; i++) {
            for (int k = 1; k <= 9; k+=3) {
                for (int n = k; n < k+3; n++) {
                    cout << i << " * " << n << " = " << i * n << "  ";
                }
                cout << '\n';
            }
            cout << '\n';
        }
    }

    
}