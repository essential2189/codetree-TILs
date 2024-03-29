#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, m;

int UpLeft(vector<vector<int>> &v, int i, int j) {
    if (i-1 >= 0 && j-1 >= 0) {
        return v[i][j] + v[i-1][j] + v[i][j-1];
    }
    return 0;
}

int UpRight(vector<vector<int>> &v, int i, int j) {
    if (i-1 >= 0 && j+1 < m) {
        return v[i][j] + v[i-1][j] + v[i][j+1];
    }
    return 0;
}

int DownLeft(vector<vector<int>> &v, int i, int j) {
    if (i+1 < n && j-1 >= 0) {
        return v[i][j] + v[i+1][j] + v[i][j-1];
    }
    return 0;
}

int DownRight(vector<vector<int>> &v, int i, int j) {
    if (i+1 < n && j+1 < m) {
        return v[i][j] + v[i+1][j] + v[i][j+1];
    }
    return 0;
}

int Right(vector<vector<int>> &v, int i, int j) {
    if (j+2 < m) {
        return v[i][j] + v[i][j+1] + v[i][j+2];
    }
    return 0;
}

int Down(vector<vector<int>> &v, int i, int j) {
    if (i+2 < n) {
        return v[i][j] + v[i+1][j] + v[i+2][j];
    }
    return 0;
}


int main() {
    cin >> n >> m;
    
    vector<vector<int>> v;
    for (int i = 0; i < n; i++) {
        vector<int> temp;
        for (int j = 0; j < m; j++) {
            int a;
            cin >> a;
            temp.push_back(a);
        }
        v.push_back(temp);
    }

    int answer = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int ul = UpLeft(v, i, j);
            int ur = UpRight(v, i, j);
            int dl = DownLeft(v, i, j);
            int dr = DownRight(v, i, j);
            int r = Right(v, i, j);
            int d = Down(v, i, j);

            if (ul > answer) {
                answer = ul;
            }
            if (ur > answer) {
                answer = ur;
            }
            if (dl > answer) {
                answer = dl;
            }
            if (dr > answer) {
                answer = dr;
            }
            if (r > answer) {
                answer = r;
            }
            if (d > answer) {
                answer = d;
            }
        }
    }

    cout << answer;
}