#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int answer = 0;
    int count = 1;
    while (true) {
        if (n / count <= 1) {
            answer++;
            break;
        }

        n /= count;
        answer++;
        count++;
    }

    cout << answer;
}