#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;

    int idx = 0;

    for (int i = 0; i < n; i++) {
        for (int j = n; j > i; j--) {
            cout << (char)(65+idx);
            idx++;
        }
        cout << '\n';
    }
}