#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<vector<char>> v(n, vector<char>(n, ' '));
    
    v[n/2][n/2] = 'A';

    int x = n/2 - 1;
    int y = n/2 - 1;
    int count = 3;
    int alpha = 66;

    int a = 10;
    while (count <= n) {
        for (int i = 0; i < count; i++) {
            v[y][x] = (char)alpha;
            alpha++;
            y++;
        }

        x--;
        y = x;
        count += 2;
    }



    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (v[i][j] != ' ') {
                cout << v[i][j] << ' ';
            }
        }
        cout << '\n';
    }
}