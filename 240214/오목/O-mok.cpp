#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> board;

bool checkLeft(vector<vector<int>> b, int i, int j, int a) {
    bool flag = false;

    for (int k = 0; k < 5; k++) {
        if (i >= 0 && i < b.size() && j-k >= 0 && j-k < b[0].size()) {
            if (b[i][j-k] != a) {
                flag = false;
                break;
            }
        }
    }

    return flag;
}

bool checkRight(vector<vector<int>> b, int i, int j, int a) {
    bool flag = true;

    for (int k = 0; k < 5; k++) {
        if (i >= 0 && i < b.size() && j+k >= 0 && j+k < b[0].size()) {
            if (b[i][j+k] != a) {
                flag = false;
                break;
            }
        }
    }

    return flag;
}

bool checkUpLeft(vector<vector<int>> b, int i, int j, int a) {
    bool flag = true;

    for (int k = 0; k < 5; k++) {
        if (i-k >= 0 && i-k < b.size() && j-k >= 0 && j-k < b[0].size()) {
            if (b[i-k][j-k] != a) {
                flag = false;
                break;
            }
        }
    }

    return flag;
}

bool checkDownRight(vector<vector<int>> b, int i, int j, int a) {
    bool flag = true;

    for (int k = 0; k < 5; k++) {
        if (i+k >= 0 && i+k < b.size() && j+k >= 0 && j+k < b[0].size()) {
            if (b[i+k][j+k] != a) {
                flag = false;
                break;
            }
        }
    }

    return flag;
}

vector<vector<int>> ratation(vector<vector<int>> b) {
    vector<vector<int>> temp(b.size(), vector<int>(b[0].size(), 0));

    for (int i = 0; i < b.size(); i++) {
        for (int j = 0; j < b.size(); j++) {
            temp[i][j] = board[b.size() - j -1][i];
        }
    }

    return temp;
}

int main() {

    for (int i = 0; i < 19; i++) {
        vector<int> v;
        for (int j = 0; j < 19; j++) {
            int i;
            cin >> i;
            v.push_back(i);
        }
        board.push_back(v);
    }

    vector<vector<int>> board_rotate = ratation(board);
    
    for (int i = 0; i < 19; i++) {
        for (int j = 0; j < 19; j++) {
            for (int a = 1; a <= 2; a++) {
                if (checkLeft(board, i, j, a)) {
                    cout << a << '\n';
                    cout << i+1 << ' ' << j-1;
                    return 0;
                }
                if (checkRight(board, i, j, a)) {
                    cout << a << '\n';
                    cout << i+1 << ' ' << j+3;
                    return 0;
                }
                if (checkUpLeft(board, i, j, a)) {
                    cout << a << '\n';
                    cout << i-1 << ' ' << j-1;
                    return 0;
                }
                if (checkDownRight(board, i, j, a)) {
                    cout << a << '\n';
                    cout << i+3 << ' ' << j+3;
                    return 0;
                }

                if (checkLeft(board_rotate, i, j, a)) {
                    cout << a << '\n';
                    cout << i+1 << ' ' << j-1;
                    return 0;
                }
                if (checkRight(board_rotate, i, j, a)) {
                    cout << a << '\n';
                    cout << i+1 << ' ' << j+3;
                    return 0;
                }
                if (checkUpLeft(board_rotate, i, j, a)) {
                    cout << a << '\n';
                    cout << i-1 << ' ' << j-1;
                    return 0;
                }
                if (checkDownRight(board_rotate, i, j, a)) {
                    cout << a << '\n';
                    cout << i+3 << ' ' << j+3;
                    return 0;
                }
            }
        }
    }

    cout << '0';
}