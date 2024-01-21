#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int answer = 0;
    int distance = 1;
    int last = a;

    if (a == b) {
        cout << 0;
        return 0;
    }

    while (true) {
        if (a < b && a + distance >= b) {
            answer += b - abs(last);
            break;
        } else if (a > b && a + distance <= b) {
            answer += abs(last) - b;
            break;
        }

        answer += answer + abs(distance);
        last = a + distance;

        distance *= -2;
    }

    cout << answer;
}