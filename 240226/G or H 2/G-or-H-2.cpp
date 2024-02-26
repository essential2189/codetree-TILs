#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;


    vector<pair<int, char>> v;

    while (n--) {
        int i;
        char c;
        cin >> i >> c;
        v.push_back({i, c});
    }

    sort(v.begin(), v.end());

    int answer = 0;
    for (int i = 0; i < v.size(); i++) {
        for (int j = i; j < v.size(); j++) {
            int g = 0;
            int h = 0;
            bool flag = false;
            for (int a = i; a <= j; a++) {
                if (v[a].second == 'G') {
                    g++;
                } else if (v[a].second == 'H') {
                    h++;
                }
            }

            if (g == 0 && h != 0) {
                flag = true;
            } else if (g != 0 && h == 0) {
                flag = true;
            } else if (g != 0 && h != 0 && g == h) {
                flag = true;
            }

            if (flag && v[j].first - v[i].first > answer) {
                answer = v[j].first - v[i].first;
            }
        }
    }

    cout << answer;
}