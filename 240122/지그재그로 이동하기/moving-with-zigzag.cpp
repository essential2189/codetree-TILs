#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int answer = 0;
    int distance = 1;
    int last = a;
    int lastDistance = 0;

    if (a == b) {
        cout << 0;
        return 0;
    }

    while (true) {
        if (a < b && a+distance >= b) {
            answer += abs(b - last);
            break;
        } else if (a > b && a+distance <= b) {
            answer += abs(b - last);
            break;
        }

        answer += lastDistance + abs((a + distance) - a);
        last = a + distance;
        lastDistance = abs((a + distance) - a);

        distance *= -2;
    }

    cout << answer;
}