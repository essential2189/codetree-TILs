#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    int answer = 0;

    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = 0; j < n; j++) {
            int a;
            cin >> a;
            
            if (a == 1) {
                sum++;
            }
        }
        
        if (sum > answer) {
            answer = sum;
        }
    }

    cout << answer;
}