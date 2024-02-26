#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> v(100, 0);
    for (int i = 0; i < n; i++) {
        int candy, a;
        cin >> candy >> a;
        v[a] += candy;
    }

    int answer = 0;
    for (int i = 0; i <= 100; i++) {
        int end = i+k+k;
        if (i+k+k > 100) {
            end = 100;
        }
        int sum = accumulate(v.begin()+i, v.begin()+end+1, 0);

        if (sum > answer) {
            answer = sum;
        }
    }
    cout << answer;
}