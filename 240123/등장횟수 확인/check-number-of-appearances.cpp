#include <iostream>

using namespace std;

int main() {
    int n = 5;

    int answer = 0;
    while(n--) {
        int i;
        cin >> i;

        if (i % 2 == 0) {
            answer++;
        }
    }

    cout << answer;
}