#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int answer = 0;
    for (int i = 10; i <= n; i++) {
        answer += i;
    }

    cout << answer;
}