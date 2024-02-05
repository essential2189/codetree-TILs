#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    cin >> str;

    int answer = 0;

    for (int i = 0; i < str.length()-1; i++) {
        
        if (str[i] == '(') {
            for (int j = i+1; j < str.length(); j++) {
                if (str[j] == ')') {
                    answer++;
                }
            }
        }
    }

    cout << answer;
}