#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int n, s;
    cin >> n >> s;

    vector<int> v;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        v.push_back(a);
    }

    int answer = 99999999;
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            int sum = 0;
            for (int a = 0; a < n; a++) {
                if (a != i && a != j) {
                    sum += v[a];
                }
            }

            if (abs(s - sum) < answer) {
                answer = abs(s - sum);
            }
        }
    }

    cout << answer;
}