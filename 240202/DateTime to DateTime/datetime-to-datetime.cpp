#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int day = (a - 11) * 24 * 60;
    int hour = (b - 11) * 60;
    int minute = (c - 11);

    if ((day + hour + minute) < 0) {
        cout << -1;
        return 0;
    } 

    cout << day + hour + minute;
}