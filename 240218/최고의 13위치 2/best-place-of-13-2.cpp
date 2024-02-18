#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<vector<int>> v;

    for (int i = 0; i < n; i++) {
        vector<int> vv;
        for (int j = 0; j < n; j++) {
            int a;
            cin >> a;
            vv.push_back(a);
        }
        v.push_back(vv);
    }

    int answer = 0;
    for (int a = 0; a < 2; a++) {
        int max = 0;
        int x, y;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n-2; j++) {
                int sum = v[i][j] + v[i][j+1] + v[i][j+2];
                if (sum > max) {
                    max = sum;
                    y = i;
                    x = j;
                }
            }
        }

        v[y][x] = -999;
        v[y][x+1] = -999;
        v[y][x+2] = -999;

        answer += max;
    }

    cout << answer;
}