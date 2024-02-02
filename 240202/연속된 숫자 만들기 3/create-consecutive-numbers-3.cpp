#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

bool check(vector<int> v) {
    if (v[0] < v[1] && v[1] < v[2]) {
        if (v[2] - v[1] == 1 && v[1] - v[0] == 1) {
            return true;
        }
    } else if (v[0] > v[1] && v[1] > v[2]){
        if (v[0] - v[1] == 1 && v[1] - v[2] == 1) {
            return true;
        }
    }
    return false;
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if (check(vector<int>{a, b, c})){
        cout << 0;
        return 0;
    }

    vector<int> v1 = {a, b, c, 0};
    vector<int> v2 = {a, b, c, 0};

    while (true) {
        if (v1[1] < v1[2]) {
            v1 = {v1[0], v1[1]-1, v1[1], v1[3]+=1};
        } else if (v1[1] > v1[2]) {
            v1 = {v1[0], v1[1]+1, v1[1], v1[3]+=1};
        }

        if (check(v1)) {
            break;
        }
    }

    while (true) {
        if (v2[0] < v2[1]) {
            v2 = {v2[1], v2[1]+1, v2[2], v2[3]+=1};
        } else if (v2[0] > v2[1]) {
            v2 = {v2[1], v2[1]-1, v2[2], v2[3]+=1};
        }

        if (check(v2)) {
            break;
        }
    }

    cout << max(v1[3], v2[3]);
}