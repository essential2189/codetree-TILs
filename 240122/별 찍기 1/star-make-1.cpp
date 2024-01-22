#include <iostream>

using namespace std;

void first(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            cout << '*';
        }
        cout << '\n';
    }
}

void second(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = n; j > i; j--) {
            cout << '*';
        }
        cout << '\n';
    }
}

void third(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = n; j > i; j--) {
            cout << ' ';
        }

        for (int a = 0; a < i; a++) {
            cout << '*';
        }

        for (int a = 1; a < i; a++) {
            cout << '*';
        }

        cout << '\n';
    }
}

int main() {
    int n, type;
    cin >> n >> type;

    switch (type) {
        case 1:
            first(n);
            break;
        case 2:
            second(n);
            break;
        case 3:
            third(n);
            break;
    }
}