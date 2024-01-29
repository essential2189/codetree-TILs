#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int one = m % 10;
    int ten = m % 100 / 10;
    int hun = m % 1000 / 100;

    cout << n * one << '\n';
    cout << n * ten << '\n';
    cout << n * hun << '\n';

    cout << n * m;
}