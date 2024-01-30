#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main() {
    string str;
    cin >> str;

    int answer = 0;

    for (int i = 0; i < str.length(); i++) {
        for (int j = i; j < str.length(); j++) {
            if (str[i] == '(' && str[j] == ')') {
                answer++;
            }
        }
    }
    
    cout << answer;
}