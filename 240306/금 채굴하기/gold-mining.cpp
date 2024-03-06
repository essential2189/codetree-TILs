#include <iostream>
#include <vector>

using namespace std;

int n, m;
int price = 0;

pair<int, int> dig(vector<vector<int>> &v, int i, int j, int k) {
    int count = 0;

    int ik = i - k;
    
    for (int y = 0; y <= k; y++) {
        for (int x = j-y; x <= j+y; x++) {
            if (ik+y >= 0 && ik+y < n && x >= 0 && x < n) {
                count += v[ik+y][x];
            }
        }

        int yy = k-y-1;
        for (int x = j-yy; x <= j+yy; x++) {
            if (i+y+1 >= 0 && i+y+1 < n && x >= 0 && x < n) {
                count += v[i+y+1][x];
            }
        }
    }

    
    return {count, price};
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
                pair<int, int> p;
                int count;
                if (k == 0) {
                    p = {v[i][j], 1};
                } else {
                    p = dig(v, i, j, k);
                }

                int price = k * k + (k+1) * (k+1);

                if (p.first * m - price >= 0 && p.first > answer) {
                    answer = p.first;
                }
            }

        }
    }

    cout << answer;
}