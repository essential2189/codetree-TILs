#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> v;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        v.push_back(a);
    }

    int answer = 0;
    for (int i = 0; i < n-k+1; i++) {
        int sum = 0;
        for (int j = i; j < i+k; j++) {
            sum += v[j];
        }

        if (sum > answer) {
            answer = sum;
        }
    }

    cout << answer;
}