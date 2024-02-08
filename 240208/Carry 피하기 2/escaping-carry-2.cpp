#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> v;

    while(n--) {
        string str;
        cin >> str;

        string temp = str;
        for (int i = 0; i < 5-str.length(); i++) {
            temp = "0" + temp;
        }

        v.push_back(temp);
    }
    
    int answer = -1;

    for (int i = 0; i < v.size()-2; i++) {
        for (int j = i+1; j < v.size()-1; j++) {
            for (int k = j+1; k < v.size(); k++) {
                bool flag = true;
                for (int n = 4; n >= 0; n--) {
                    int sum = (v[i][n] - '0') + (v[j][n] - '0') + (v[k][n] - '0');
                    if (sum > 10) {
                        flag = false;
                        break;
                    }
                }

                if (flag) {
                    int sum = stoi(v[i]) + stoi(v[j]) + stoi(v[k]);
                    if (sum > answer) {
                        answer = sum;
                    }
                }
            }
        }
    }

    cout << answer;
}