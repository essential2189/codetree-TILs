#include <iostream>
#include <vector>

using namespace std;

int main() {
    int r, c;
    cin >> r >> c;

    vector<vector<char>> board;

    for (int i = 0; i < r; i++) {
        vector<char> v;
        for (int j = 0; j < c; j++) {
            char c;
            cin >> c;
            v.push_back(c);
        }
        board.push_back(v);
    }

    char start;
    if (board[0][0] == 'W') {
        start = 'W';
    } else {
        start = 'B';
    }

    if (start == board[r-1][c-1]) {
        cout << 0;
        return 0;
    }

    int answer = 0;
    for (int i = 1; i < r-1; i++) {
        for (int j = 1; j < c-1; j++) {
            if (board[i][j] != start) {
                for (int k = i+1; k < r-1; k++) {
                    for (int l = j+1; l < c-1; l++) {
                        if (board[k][l] == start) {
                            answer++;
                        }
                    }
                }
            }
        }
    }

    cout << answer;
}