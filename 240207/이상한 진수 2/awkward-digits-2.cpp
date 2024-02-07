#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    string str;
    cin >> str;

    bool changed = false;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '0') {
            str[i] = '1';
            changed = true;
            break;
        }
    }

    if (!changed) {
        str[str.length()-1] = '0';
    }

    int answer = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '1') {
            answer += pow(2, str.length() - i - 1);
        }
    }

    cout << answer;
}