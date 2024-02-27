#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    if (n == 1 && m == 1) {
        cout << 2;
        return 0;
    }

    vector<vector<int>> v;
    for (int i = 0; i < n; i++) {
        vector<int> temp;
        for (int j = 0; j < n; j++) {
            int a;
            cin >> a;
            temp.push_back(a);
        }
        v.push_back(temp);
    }

    int answer = 0;
    for (int i = 0; i < n; i++) {
        bool h_flag = true;
        bool v_flag = true;
        int count_h = 1;
        int count_v = 1;
        for (int j = 0; j < n-1; j++) {
            if (v[i][j] == v[i][j+1]) {
                count_h++;
            } else {
                count_h = 1;
            }
            if (v[j][i] == v[j+1][i]) {
                count_v++;
            } else {
                count_v = 1;
            }
            
            if (h_flag && count_h >= m) {
                answer++;
                h_flag = false;
            }
            if (v_flag && count_v >= m) {
                answer++;
                count_v = 1;
                v_flag = false;
            }
        }
    }

    cout << answer;
}