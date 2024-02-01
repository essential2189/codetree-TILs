#include <iostream>

using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int first = a * 60 + b;
    int second = c * 60 + d;

    cout << second - first;
}