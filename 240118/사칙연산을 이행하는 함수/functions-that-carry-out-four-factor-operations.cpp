#include <iostream>

using namespace std;

int main() {
    int x, y;
    char a;

    cin >> x >> a >> y;

    int answer;
    if (a == '+') {
        answer = x + y;
    } else if (a == '-') {
        answer = x - y;
    } else if (a == '*') {
        answer = x * y;
    } else if (a == '/') {
        answer = x / y;
    }

    cout << x << ' ' << a << ' ' << y << " = " << answer ;
}