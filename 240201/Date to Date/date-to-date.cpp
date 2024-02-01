#include <iostream>
#include <vector>

using namespace std;

int main() {
    int m1, d1, m2, d2;
    cin >> m1 >> d1 >> m2 >> d2;

    int answer = d2;

    vector<int> month = {-1, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    for (int i = m1; i < m2; i++) {
        if (i == m1) {
            answer += month[i] - d1 + 1;
        } else {
            answer += month[i];
        }
    }

    cout << answer;
}