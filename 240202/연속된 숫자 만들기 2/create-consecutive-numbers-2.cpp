#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    vector<int> v = {a, b, c};

    sort(v.begin(), v.end());

    bool flag = true;
    for (int i; i < v.size()-1; i++) {
        if (abs(v[i] - v[i+1]) != 1) {
            flag = false;
            break;
        }
    }
    if (flag) {
        cout << 0;
        return 0;
    }


    if (abs(a - b) == 2) {
        cout << 1;
    } else if (abs(a - c) == 2) {
        cout << 1;
    } else if (abs(b - c) == 2) {
        cout << 1;
    } else {
        cout << 2;
    }
    
}