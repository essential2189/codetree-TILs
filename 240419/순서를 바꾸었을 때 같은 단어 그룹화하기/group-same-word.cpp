#include <iostream>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    map<string, int> m;

    while (n--) {
        string s;
        cin >> s;

        sort(s.begin(), s.end());

        if (m.find(s) != m.end()) {
            m[s] += 1;
        } else {
            m[s] = 1;
        }
    }

    int answer = 0;
    for (auto i: m) {
        if (i.second > answer) {
            answer = i.second;
        }
    }

    cout << answer;
}