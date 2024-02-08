#include <iostream>
#include <deque>

using namespace std;

int main() {
    int n;
    cin >> n;

    deque<int> q;
    while (n--) {
        int i;
        cin >> i;

        q.push_back(i);
    }

    int answer = 99999999;

    for (int i = 0; i < q.size(); i++) {
        int temp = 0;
        for (int j = 0; j < q.size(); j++) {
            temp += q[j] * j;
        }

        if (temp < answer) {
            answer = temp;
        }

        q.push_back(q.front());
        q.pop_front();
    }

    cout << answer;
}