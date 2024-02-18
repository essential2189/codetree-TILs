#include <iostream>
#include <string>
#include <vector>

using namespace std;


bool checkLeft(vector<string> v, int x, int y) {
    if (x-2 >= 0) {
        if (v[y][x-1] == 'E' && v[y][x-2] == 'E') {
            return true;
        }
    }
    return false;
}

bool checkRight(vector<string> v, int x, int y) {
    if (x+2 < v[0].length()) {
        if (v[y][x+1] == 'E' && v[y][x+2] == 'E') {
            return true;
        }
    }
    return false;
}

bool checkUp(vector<string> v, int x, int y) {
    if (y-2 >= 0) {
        if (v[y-1][x] == 'E' && v[y-2][x] == 'E') {
            return true;
        }
    }
    return false;
}

bool checkDown(vector<string> v, int x, int y) {
    if (y+2 < v.size()) {
        if (v[y+1][x] == 'E' && v[y+2][x] == 'E') {
            return true;
        }
    }
    return false;
}

bool checkUpLeft(vector<string> v, int x, int y) {
    if (y-2 >= 0 && x-2 >= 0) {
        if (v[y-1][x-1] == 'E' && v[y-2][x-2] == 'E') {
            return true;
        }
    }
    return false;
}

bool checkUpRight(vector<string> v, int x, int y) {
    if (y-2 >= 0 && x+2 < v[0].length()) {
        if (v[y-1][x+1] == 'E' && v[y-2][x+2] == 'E') {
            return true;
        }
    }
    return false;
}

bool checkDownLeft(vector<string> v, int x, int y) {
    if (y+2 < v.size() && x-2 >= 0) {
        if (v[y+1][x-1] == 'E' && v[y+2][x-2] == 'E') {
            return true;
        }
    }
    return false;
}

bool checkDownRight(vector<string> v, int x, int y) {
    if (y+2 < v.size() && x+2 < v[0].length()) {
        if (v[y+1][x+1] == 'E' && v[y+2][x+2] == 'E') {
            return true;
        }
    }
    return false;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<string> v;

    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        v.push_back(s);
    }

    int answer = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (v[i][j] == 'L') {
                if (checkUp(v, j, i)) {
                    answer++;
                }
                if (checkDown(v, j, i)) {
                    answer++;
                }
                if (checkLeft(v, j, i)) {
                    answer++;
                }
                if (checkRight(v, j, i)) {
                    answer++;
                }
                if (checkUpLeft(v, j, i)) {
                    answer++;
                }
                if (checkUpRight(v, j, i)) {
                    answer++;
                }
                if (checkDownLeft(v, j, i)) {
                    answer++;
                }
                if (checkDownRight(v, j, i)) {
                    answer++;
                }
            }
        }
    }

    cout << answer;

}