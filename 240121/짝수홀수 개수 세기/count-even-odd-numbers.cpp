#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n;
    cin >> n;

    int even = 0;
    int odd = 0;
    
    while (n--) {
        int a;
        cin >> a;

        if (a == 0) {
            break;
        }

        if (a % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    cout << even << '\n' << odd;
}