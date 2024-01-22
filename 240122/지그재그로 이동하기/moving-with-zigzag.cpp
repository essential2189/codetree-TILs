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
            cout << '\n';
            cout << a << '+' << distance << '=' << a+distance << '\n';
            cout << b  << ' ' << last << ' ' << lastDistance << '\n';
            answer += abs(b - abs(last));
            break;
        } else if (a > b && a+distance <= b) {
            cout << '\n';
            cout << a << '+' << distance << '=' << a+distance << '\n';
            cout << b  << ' ' << last << ' ' << lastDistance << '\n';
            answer += abs(b - abs(last));
            break;
        }

        cout << answer << '+' << lastDistance << '+';

        answer += lastDistance + abs((a + distance) - a);
        last = a + distance;
        lastDistance = abs((a + distance) - a);

        cout << abs((a + distance) - a) << '=' << answer << '\n';

        distance *= -2;
    }

    cout << answer;
}

// 7+1=8
// 7-2=5
// 7+4=11
// 7-8=-1


// -1 0 1 2 3 4 5 6 7 8 9 10 11