#include <iostream>
#include <vector>

using namespace std;

int main() {
    int r, c;
    cin >> r >> c;

    vector<vector<int>> black;

    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= c; j ++) {
            char c;
            cin >> c;

            if (i != r && j != c && c == 'B') {
                black.push_back({i, j});
            }
        }
    }

    int answer = 0;
    int secondWhite = 0;
    for (int i = 0; i < black.size(); i++) {
        for (int y = black[i][0]+1; y < r; y++) {
            for (int x = black[i][1]+1; x < c; x++) {
                secondWhite++;
            }
        }
    }


    cout << black.size() * secondWhite;
}