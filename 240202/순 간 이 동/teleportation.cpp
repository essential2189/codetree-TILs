#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a, b, x, y;
    cin >> a >> b >> x >> y;

    int dist1 = abs(a - x) + abs(b - y);
    int dist2 = abs(a - y) + abs(b - x);

    int answer = min(dist1, dist2);

    cout << answer;
}