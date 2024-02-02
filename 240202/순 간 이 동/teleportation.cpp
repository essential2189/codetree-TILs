#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a, b, x, y;
    cin >> a >> b >> x >> y;

    int dist1 = abs(a - x) + abs(b - y);
    int dist2 = abs(a - y) + abs(b - x);

    pair<int, int> answer = minmax({dist1, dist2, abs(a-b)});

    cout << answer.first;
}