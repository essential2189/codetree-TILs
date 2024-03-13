#include <iostream>
#include <vector>

using namespace std;

int n, m;
vector<vector<int>> v;

int sum(int i, int j, int y, int x) {
    int count = 0;
    for (int a = i; a <= y; a++) {
        for (int b = j; b <= x; b++) {
            count += v[a][b];
        }
    }

    return count;
}

vector<vector<bool>> visit(int i, int j, int y, int x) {
    vector<vector<bool>> visited(n, vector<bool>(m, false));

    for (int a = i; a <= y; a++) {
        for (int b = j; b <= x; b++) {
            visited[a][b] = true;
        }
    }

    return visited;
}

bool checkVisit(vector<vector<bool>> v, int i, int j, int y, int x) {

    for (int a = i; a <= y; a++) {
        for (int b = j; b <= x; b++) {
            if (v[a][b]) {
                return false;
            }
        }
    }

    return true;
}

int main() {
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

    int answer = -99999999;
    
    // first
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {

            for (int y = i; y < n; y++) {
                for (int x = j; x < m; x++) {
                    int count = sum(i, j, y, x);

                    vector<vector<bool>> visited = visit(i, j, y, x);

                    // for (int a = 0; a < n; a++) {
                    //     for (int b = 0; b < m; b++) {
                    //         cout << visited[a][b] << ' ';
                    //     }
                    //     cout << '\n';
                    // }

                    // second
                    for (int ii = 0; ii < n; ii++) {
                         for (int jj = 0; jj < m; jj++) {
                            for (int yy = ii; yy < n; yy++) {
                                for (int xx = jj; xx < n; xx++) {

                                        if (checkVisit(visited, ii, jj, yy, xx)) {
                                            int count2 = sum(ii, jj, yy, xx);

                                            if (count + count2 > answer) {
                                                answer = count + count2;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    cout << answer;
}