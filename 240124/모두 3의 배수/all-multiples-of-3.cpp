#include <iostream>

using namespace std;

int main() {
    int n = 5;

    bool flag = true;
    while (n--) {
        int i;
        cin >> i;

        if (i % 1 != 0) {
            flag = false;
            break;
        }
    }

    if (flag) {
        cout << 1;
    } else {
        cout << 0;
    }
}