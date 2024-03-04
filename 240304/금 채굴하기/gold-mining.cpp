#include <iostream>
#include <vector>

using namespace std;

int n, m;

int dig(vector<vector<int>> &v, int i, int j, int k) {
    int count = 0;
    
    for (int y = 0; y < k; y++) {
        for (int x = -y; x <= y; x++) {

            if (i+y < n && i+y >= 0 && j+x < n && j+x >= 0) {
                count += v[i+y][j+x];
            } else {
                return 0;
            }
        }
    }

    for (int y = 2; y <= k; y++) {
        for (int x = -(k-y); x <= k-y; x++) {
            if (i+y+k-2 < n && i+y+k-2 >= 0 && j+x < n && j+x >= 0) {
                count += v[i+y+k-2][j+x];
            } else {
                return 0;
            }
        }
    }

    
    return count;
}

int main() {
    cin >> n >> m;

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
        for (int j = 0; j < n; j++) {
            for (int k = 0; k <= n; k++) {
                int count;
                if (k == 0) {
                    count = v[i][j];
                } else {
                    count = dig(v, i, j, k+1);
                }
                int price = k * k + (k + 1) * (k + 1);

                if (count * m - price >= 0 && count > answer) {
                    answer = count;
                }
            }

        }
    }

    cout << answer;
}