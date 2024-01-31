#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<vector<int>> v;

    while(n--) {
        int x, y;
        cin >> x >> y;

        v.push_back({x, y});
    }

    int answer = 999999999;

    for (int i = 1; i < v.size()-1; i++) {
        int temp = 0;
        vector<int> curr = {v[0][0], v[0][1]};

        for (int j = 0; j < v.size(); j++) {
            if (i == j) {
                continue;
            }

            temp += abs(curr[0] - v[j][0]) + abs(curr[1] - v[j][1]);
            curr = {v[j][0], v[j][1]};
        }

        if (temp < answer) {
            answer = temp;
        }
    }

    cout << answer;
}