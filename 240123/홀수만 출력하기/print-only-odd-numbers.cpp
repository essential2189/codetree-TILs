#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        int i;
        cin >> i;

        if (i % 3 == 0) {
            cout << i << '\n';
        }
    }
}