#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int n, h, t;
    cin >> n >> h >> t;

    vector<int> v;
    while(n--) {
        int i;
        cin >> i;
        v.push_back(i);
    }

    int answer = 99999999;
    for (int i = 0; i <= v.size()-t; i++) {
        int diff = 0;
        for (int j = 0; j < t; j++) {
            diff += abs(v[i+j] - h);
        }
        
        if (diff < answer) {
            answer = diff;
        }
    }

    cout << answer;
}