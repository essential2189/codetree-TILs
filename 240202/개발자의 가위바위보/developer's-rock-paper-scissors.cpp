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

        if (a == 3 && b == 1) {
            right++;
        } else if (a == 1 && b == 3) {
            left++;
        } else if (a > b && !(a == 3 && b == 1)) {
            left++;
        } else if (a < b && !(a == 1 && b == 3)) {
            right++;
        }
    }

    cout << max(left, right);
}