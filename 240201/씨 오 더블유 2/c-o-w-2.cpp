#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;

    string str;
    cin >> str;

    int answer = 0;
    for (int i = 0; i < str.length()-2; i++) {
        for (int j = i+1; j < str.length()-1; j++) {
            for (int k = j+1; k < str.length(); k++) {
                if (str[i] == 'C' && str[j] == 'O' && str[k] == 'W') {
                    answer++;
                }
            }
        }
    }

    cout << answer;
}