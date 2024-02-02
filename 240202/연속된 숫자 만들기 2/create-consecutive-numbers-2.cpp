#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;


    if (abs(a - b) == 2) {
        cout << 1;
    } else if (abs(a - c) == 2) {
        cout << 1;
    } else if (abs(b - c) == 2) {
        cout << 1;
    } else {
        cout << 2;
    }
    
}