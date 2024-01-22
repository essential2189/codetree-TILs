#include <iostream>
#include <string>

using namespace std;

int main() {
    string a;
    int n;

    cin >> a >> n;

    while (n--) {
        int i;
        cin >> i;

        if (i-1 < a.size()) {
            a.erase(i-1, 1);
            cout << a << '\n';
        }
    }
}