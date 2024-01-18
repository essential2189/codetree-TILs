#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<pair<int, int>> v;

    int n = 3;
    
    while (n--) {
        int a, b;
        cin >> a >> b;

        pair<int, int> p = make_pair(a, b);
        v.push_back(p);
    }


    for (int i = 0; i < 100; i++) {
        int curr = i % 3;
        int next = (curr + 1) % 3;

        if (v[next].first >= v[curr].second + v[next].second) {
            v[next].second += v[curr].second;
            v[curr].second = 0;
        } else {
            v[next].second += v[next].first;
            v[curr].second -= v[next].first;
        }

    }

    cout << v[0].second << '\n';
    cout << v[1].second << '\n';
    cout << v[2].second;
}