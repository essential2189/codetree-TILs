#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int UpLeft(vector<vector<int>> v, int i, int j) {
    if (i-1 >= 0 && j-1 >= 0) {
        return v[i][j] + v[i-1][j] + v[i][j-1];
    }
    return 0;
}

int UpRight(vector<vector<int>> v, int i, int j) {
    if (i-1 >= 0 && j+1 < v.size()) {
        return v[i][j] + v[i-1][j] + v[i][j+1];
    }
    return 0;
}

int DownLeft(vector<vector<int>> v, int i, int j) {
    if (i+1 < v.size() && j-1 >= 0) {
        return v[i][j] + v[i+1][j] + v[i][j-1];
    }
    return 0;
}

int DownRight(vector<vector<int>> v, int i, int j) {
    if (i+1 < v.size() && j+1 < v.size()) {
        return v[i][j] + v[i+1][j] + v[i][j+1];
    }
    return 0;
}

int Right(vector<vector<int>> v, int i, int j) {
    if (j+2 < v.size()) {
        return v[i][j] + v[i][j+1] + v[i][j+2];
    }
    return 0;
}

int Down(vector<vector<int>> v, int i, int j) {
    if (i+2 < v.size()) {
        return v[i][j] + v[i+1][j] + v[i+2][j];
    }
    return 0;
}

int main() {
    int n, m;
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
            
            pair<int, int> max = minmax({ul, ur, dl, dr, r, d});

            if (max.second > answer) {
                answer = max.second;
            }
        }
    }

    cout << answer;
}