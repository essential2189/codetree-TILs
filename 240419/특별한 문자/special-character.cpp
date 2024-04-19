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
    for (auto i: m) {
        if (i.second == 1) {
            cout << i.first;
            flag = false;
            break;
        }
    }

    if (flag) {
        cout << "None";
    }
}