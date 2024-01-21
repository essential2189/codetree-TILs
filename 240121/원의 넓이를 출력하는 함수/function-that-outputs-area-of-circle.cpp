#include <iostream>

using namespace std;

int main() {
    float n;
    cin >> n;

    cout << fixed;
    cout.precision(2);
    cout << n * n * 3.14;
}