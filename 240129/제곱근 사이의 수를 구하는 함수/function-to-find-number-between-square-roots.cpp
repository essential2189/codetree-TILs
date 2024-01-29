#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float a, b;
    cin >> a >> b;

    float a_sqrt = sqrt(a);
    float b_sqrt = sqrt(b);

    cout << abs(ceil(a_sqrt) - ceil(b_sqrt));
}