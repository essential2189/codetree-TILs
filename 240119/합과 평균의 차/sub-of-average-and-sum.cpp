#include <iostream>

using namespace std;

int main() {
    int a, b, c;

    cin >> a >> b >> c;

    int sum = a+b+c;
    int avg = (a+b+c)/3;

    cout << sum << '\n';
    cout << avg << '\n';
    cout << sum-avg;
}