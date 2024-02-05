#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<vector<int>> board;

    for (int i = 0; i < n; i++) {
        vector<int> v;
        for (int j = 0; j < n; j++) {
            int i;
            cin >> i;
            v.push_back(i);
        }
        board.push_back(v);
    }

    int answer= 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-2; j++) {
            int sum = board[i][j] + board[i][j+1] + board[i][j+2];

            if (sum > answer) {
                answer = sum;
            }
        }
    }

    cout << answer;
}