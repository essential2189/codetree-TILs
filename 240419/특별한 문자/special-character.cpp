#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    string s;
    cin >> s;

    map<char, int> m;
    for (char c: s) {
        if (m.find(c) != m.end()) {
            m[c] += 1;
        } else {
            m[c] = 1;
        }
    }

    bool flag = true;
    int answer_idx = 9999999;
    char answer;
    for (auto i: m) {
        if (i.second == 1) {
            int idx = s.find(i.first);

            if (idx < answer_idx) {
                answer_idx = idx;
                answer = i.first;
                flag = false;
            }
        }
    }

    if (flag) {
        cout << "None";
    } else {
        cout << answer;
    }
}