#include <iostream>
#include <vector>

using namespace std;

int main() {
    int r, c;
    cin >> r >> c;

    vector<vector<char>> board;

    for (int i = 1; i <= r; i++) {
        vector<char> v;
        for (int j = 1; j <= c; j++) {
            char c;
            cin >> c;
            v.push_back(c);
        }
        board.push_back(v);
    }

    char startColor;
    if (board[0][0] == 'W') {
        startColor = 'W';
    } else {
        startColor = 'B';
    }

    int answer = 0;
    for (int i = 1; i < r-1; i++) {
        for (int j = 1; j < c-1; j++) {

            // first
            if (board[i][j] != startColor) {
                for (int a = i+1; a < r-1; a++) {
                    for (int b = j+1; b < c-1; b++) {

                        // second
                        if (board[a][b] == startColor) {
                            if (r-1 - a > 0 && c-1 - b > 0) {
                                answer++;
                            }
                        }
                    }
                }
            }
        }
    }

    cout << answer;
}