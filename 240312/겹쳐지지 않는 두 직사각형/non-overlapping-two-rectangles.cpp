#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> v;

int sum(int i, int j, int y, int x) {
    int count = 0;
    for (int a = i; a <= y; a++) {
        for (int b = j; b <= x; b++) {
            printf("%d %d\n", a, b);
            count += v[a][b];
        }
    }

    return count;
}

int main() {
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        vector<int> temp;
        for (int j = 0; j < m; j++) {
            int a;
            cin >> a;
            temp.push_back(a);
        }
        v.push_back(temp);
    }
    
    int first_max = -99999;
    int maxi, maxj, maxy, maxx;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {

            for (int y = i; y < n; y++) {
                for (int x = j; x < m; x++) {
                    int count = sum(i, j, y, x);
                    printf("%d\n\n", count);
                    if (count > first_max) {
                        first_max = count;
                        maxi = i;
                        maxj = j;
                        maxy = y;
                        maxx = x;
                    }
                 }
            }
            break;
        }
        break;
    }

    printf("%d %d %d %d   %d\n", maxi, maxj, maxy, maxx, first_max);

    // for (int a = maxi; a <= maxy; a++) {
    //     for (int b = maxj; b <= maxx; b++) {
    //         v[a][b] = -99999;
    //     }
    // }

    int second_max = -99999;
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < m; j++) {

    //         for (int y = i; y < n; y++) {
    //             for (int x = j; x < m; x++) {
    //                 int count = sum(i, j, y, x);
    //                 if (count > second_max) {
    //                     second_max = count;
    //                 }
    //              }
    //         }
    //     }
    // }


    cout << first_max + second_max;
}