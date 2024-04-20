#include <iostream>
#include <map>

using namespace std;

int main() {
    int n;
    cin >> n;

    map<int, int> m;

    while(n--) {
        int x, y;
        cin >> x >> y;

        if (m.find(x) != m.end()) {
            if (y < m[x]) {
                m[x] = y;
            }
        } else {
            m[x] = y;
        }
    }

    long answer = 0;
    for (auto i: m) {
        answer += i.second;
    }

    cout << answer;
}