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

    if (abs(a-b) > abs(b-c)) {
        cout << abs(a-b) - 1;
    } else {
        cout << abs(b-c) - 1;
    }
}