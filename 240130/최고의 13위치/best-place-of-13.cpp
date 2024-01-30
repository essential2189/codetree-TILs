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

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= n-3; j++) {
            int sum = v[i][j] + v[i][j+1] + v[i][j+2];
            
            if (sum > answer) {
                answer = sum;
            }
        }
    }

    cout << answer;
}