#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> rotation(vector<vector<int>> v) {
    vector<vector<int>> temp(v.size(), vector<int>(v[0].size(), 0));

    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v[0].size(); j++) {
            temp[i][j] = v[v.size() - i - 1][v[0].size() - j - 1];
        }
    }

    return temp;
}

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
    vector<vector<int>> temp_v = v;

    for (int k = 0; k < 2; k++) {
        int temp = 0;
        for (int a = 0; a < 2; a++) {
            int max = 0;
            int x, y;
            for (int i = 0; i < n; i++){
                for (int j = 0; j < n-2; j++) {
                    int sum = temp_v[i][j] + temp_v[i][j+1] + temp_v[i][j+2];
                    if (sum > max) {
                        max = sum;
                        y = i;
                        x = j;
                    }
                }
            }

            if (max > 0) {
                temp_v[y][x] = -999;
                temp_v[y][x+1] = -999;
                temp_v[y][x+2] = -999;

                temp += max;
            }
        }

        if (temp > answer) {
            answer = temp;
        }

        temp_v = rotation(v);
    }

    cout << answer;
}