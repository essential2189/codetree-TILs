#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    
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
    for (int i = 0; i <= n-3; i++) {
        for (int j = 0; j <= n-3; j++) {
            int sum = 0;
            for (int k = 0; k < 3; k++) {
                for (int l = 0; l < 3; l++) {
                    sum += v[i+k][j+l];
                }
            }

            if (sum > answer) {
                answer = sum;
            }
        }
    }

    cout << answer;
}