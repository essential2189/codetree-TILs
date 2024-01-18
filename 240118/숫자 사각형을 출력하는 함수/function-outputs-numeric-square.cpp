#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<vector<int>> board(n, vector<int>(n));

    int count = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            board[j][i] = count;
            count++;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << board[i][j] << ' ';
        }
        cout << '\n';
    }
}