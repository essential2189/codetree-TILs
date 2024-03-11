#include <iostream>
#include <vector>

using namespace std;

int n;
vector<vector<int>> v;

int square(int i, int j, int first, int second) {
  int count = v[i][j];

  int last_y = i;
  int last_x = j;

  // first
  bool check = false;
  for (int idx = 1; idx <= first; idx++) {
    int y = last_y - 1;
    int x = last_x + 1;
    if (y > 0 && x < n) {
      count += v[y][x];
      last_y = y;
      last_x = x;
      check = true;
    } else {
      return -1;
    }
  }

  // second
  if (check) {
    check = false;
    for (int idx = 1; idx <= second; idx++) {
      int y = last_y - 1;
      int x = last_x - 1;

      if (y >= 0 && x > 0) {
        count += v[y][x];
        last_y = y;
        last_x = x;
        check = true;
      } else {
        return -1;
      }
    }
  }

  // third
  if (check) {
    check = false;
    for (int idx = 1; idx <= first; idx++) {
      int y = last_y + 1;
      int x = last_x - 1;

      if (y < n && x >= 0) {
        count += v[y][x];
        last_y = y;
        last_x = x;
        check = true;
      } else {
        return -1;
      }
    }
  }

  // fourth
  if (check) {
    for (int idx = 1; idx < second; idx++) {
      int y = last_y + 1;
      int x = last_x + 1;

      if (y < n && x < n) {
        count += v[y][x];
      } else {
        return -1;
      }
    }
  }

  return count;
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        vector<int> temp;
        for (int j = 0; j < n; j++) {
            int a;
            cin >> a;
            temp.push_back(a);
        }
        v.push_back(temp);
    }

    int answer = 0;
    for (int i = 2; i < n; i++) {
        for (int j = 1; j < n-1; j++) {
            for (int first = 1; first < n; first++) {
              for (int second = 1; second < n; second++) {
                int count = square(i, j, first, second);
                if (count > answer) {
                  answer = count;
                }
              }
            }
        }
    }

    cout << answer;
}