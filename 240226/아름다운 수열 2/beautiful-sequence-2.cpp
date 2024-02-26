#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool contain(vector<int> v, int i) {
    for (int vv: v) {
        if (vv == i) {
            return true;
        }
    }
    return false;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> a;
    vector<int> b;

    for (int k = 0; k < n; k++) {
        int i;
        cin >> i;
        a.push_back(i);
    }
    for (int k = 0; k < m; k++) {
        int i;
        cin >> i;
        b.push_back(i);
    }

    sort(b.begin(), b.end());

    int answer = 0;
    for (int i = 0; i <= a.size()-m; i++) {
        vector<int> slice(a.begin()+i, a.begin()+i+m);
        sort(slice.begin(), slice.end());
        
        if (slice == b) {
            answer++;
        }
    }

    cout << answer;
}