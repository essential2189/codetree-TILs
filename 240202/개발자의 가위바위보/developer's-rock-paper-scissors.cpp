#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;

    int left = 0;
    int right = 0;

    while(n--) {
        int a, b;
        cin >> a >> b;

        if (a > b) {
            left++;
        } else if (b > a) {
            right++;
        }
    }

    cout << max(left, right);
}