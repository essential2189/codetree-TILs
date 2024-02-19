#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<pair<int, char>> v;

    while (n--) {
        int a;
        char c;
        cin >> a >> c;
        v.push_back({a, c});
    }

    sort(v.begin(), v.end());

    int answer = 0;
    for (int i = 0; i < v.size(); i++) {
        int sum = 0;
        for (int j = i; j < v.size(); j++) {
            if (v[j].first <= v[i].first+k) {
                if (v[j].second == 'G') {
                    sum += 1;
                } else if (v[j].second == 'H') {
                    sum += 2;
                }
            }
        }

        if (sum > answer) {
            answer = sum;
        }
    }

    cout << answer;
}