#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int answer = 1;
    for (int i = 1; i <= b; i++) {
        if (i % a == 0) {
            answer *= i;
        }
    }

    cout << answer;
}