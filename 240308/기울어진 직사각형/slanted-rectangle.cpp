#include <iostream>
#include <vector>

using namespace std;

int n;

vector<int> first(vector<vector<int>> v, int i, int j) {
    int count = 0;
    int idx = 0;
    int last_y = -1;
    int last_x = -1;
    while(true) {
        if (i - idx < 0 || j + idx >= n) {
            break;
        }
        count += v[i-idx][j+idx];
        last_y = i - idx;
        last_x = j + idx;

        idx++;
    }

    return {last_y, last_x, count};
}

vector<int> second(vector<vector<int>> v, int i, int j) {
    int count = 0;
    int idx = 1;
    int last_y = -1;
    int last_x = -1;
    while(true) {
        if (i - idx < 0 || j - idx < 0) {
            break;
        }
        count += v[i-idx][j-idx];
        last_y = i - idx;
        last_x = j - idx;

        idx++;
    }

    return {last_y, last_x, count};
}

vector<int> third(vector<vector<int>> v, int i, int j, int start_i) {
    int count = 0;
    int idx = 1;
    int last_y = -1;
    int last_x = -1;
    while(true) {
        if (i + idx >= start_i || j - idx < 0) {
            break;
        }
        count += v[i+idx][j-idx];
        last_y = i + idx;
        last_x = j - idx;

        idx++;
    }

    return {last_y, last_x, count};
}

vector<int> fourth(vector<vector<int>> v, int i, int j, int start_i, int start_j) {
    int count = 0;
    int idx = 1;
    int last_y = -1;
    int last_x = -1;
    while(true) {
        if (i + idx >= start_i || j + idx >= start_j) {
            break;
        }
        count += v[i+idx][j+idx];
        last_y = i + idx;
        last_x = j + idx;

        idx++;
    }

    return {last_y, last_x, count};
}

int main() {
    cin >> n;

    vector<vector<int>> v;
    for (int i = 0; i < n; i++) {
        vector<int> temp;
        for (int j = 0; j < n; j++) {
            int a;
            cin >> a;
            temp.push_back(a);
        }
        v.push_back(temp);
    }
    // vector<int> f = first(v, 3, 2);
    // cout <<"first "<< f[0] << ' ' << f[1] << ' ' << f[2] << '\n';

    // vector<int> s = second(v, f[0], f[1]);
    // cout <<"second "<< s[0] << ' ' << s[1] << ' ' << s[2] << '\n';

    // vector<int> t = third(v, s[0], s[1], 3);
    // cout <<"third "<< t[0] << ' ' << t[1] << ' ' << t[2] << '\n';

    // vector<int> fo = fourth(v, t[0], t[1], 3, 2);
    // cout <<"fourth "<< fo[0] << ' ' << fo[1] << ' ' << fo[2] << '\n';

    int answer = 0;
    for (int i = 2; i < n; i++) {
        for (int j = 1; j < n-1; j++) {
            vector<int> f = first(v, i, j);
            vector<int> s = second(v, f[0], f[1]);
            vector<int> t = third(v, s[0], s[1], i);
            vector<int> fo = fourth(v, t[0], t[1], i, j);

            int sum = f[2] + s[2] + t[2] + fo[2];
            if (sum > answer) {
                answer = sum;
            }
        }
    }

    cout << answer;
}