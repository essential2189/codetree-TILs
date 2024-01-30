#include <iostream>
#include <vector>

using namespace std;

int main() {
    int r, c;
    cin >> r >> c;

    vector<vector<char>> board;
    vector<vector<int>> black;

    for (int i = 1; i <= r; i++) {
        vector<char> v;
        for (int j = 1; j <= c; j ++) {
            char c;
            cin >> c;
            v.push_back(c);

            if (i != r && j != c && c == 'B') {
                black.push_back({i, j});
            }
        }
        board.push_back(v);
    }

    if (board[0][0] != 'W' || board[r-1][c-1] != 'B') {
        cout << 0;
        return 0;
    }

    int answer = 0;
    for (int i = 0; i < black.size(); i++) {
        int secondWhite = 0;
        for (int y = black[i][0]+1; y < r; y++) {
            for (int x = black[i][1]+1; x < c; x++) {
                if (board[y-1][x-1] == 'W') {
                    secondWhite++;
                }
            }
        }
        answer += secondWhite;
    }

    cout << answer;
}