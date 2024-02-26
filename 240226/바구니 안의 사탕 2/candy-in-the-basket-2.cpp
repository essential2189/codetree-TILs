#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    
    vector<int> v(k*2*2, 0);

    for (int i = 0; i < n; i++) {
        int candy, b;
        cin >> candy >> b;
        v[b] += candy;
    }

    int answer = 0;
    for (int i = k; i < k*2; i++) {
        int sum = accumulate(v.begin()+i-k, v.begin()+i+k+1, 0);

        if (sum > answer) {
            answer = sum;
        }
    }

    cout << answer;
}