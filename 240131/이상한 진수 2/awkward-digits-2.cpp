#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    string str;
    cin >> str;


    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '0') {
            str[i] = '1';
            break;
        }
    }

    int answer = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[str.length() - i - 1] == '1') {
            answer += pow(2, i);
        }
    }

    cout << answer;
}