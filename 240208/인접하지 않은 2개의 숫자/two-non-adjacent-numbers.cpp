#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v;
    while(n--) {
        int i;
        cin >> i;

        v.push_back(i);
    }

    int answer = 0;

    for (int i = 0; i < v.size(); i++) {
        int temp = 0;
        for (int j = 0; j < v.size(); j++) {
            if (abs(i - j) > 1) {
                if (v[i]+v[j] > answer) {
                    answer = v[i] + v[j];
                }
            }
        }
    }

    cout << answer;
}