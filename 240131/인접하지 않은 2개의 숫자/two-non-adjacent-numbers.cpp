#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    deque<int> q;
    while(n--) {
        int i;
        cin >> i;

        q.push_back(i);
    }

    int answer = 0;
    for (int i = 0; i < q.size(); i++) {
        int left = 0;
        int right = 0;
        for (int j = 0; j < q.size(); j++) {
            if (i+1 < j && i+1 < q.size()) {
                if (right < q[i] + q[j]) {
                    right = q[i] + q[j];
                }
            }

            if (i-1 > j && i-1 >= 0) {
                if (left < q[i] + q[j]) {
                    left = q[i] + q[j];
                }
            }
        }

        pair<int, int> p = minmax({answer, right, left});
        answer = p.second;
    }

    cout << answer;
}