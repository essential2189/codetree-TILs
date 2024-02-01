#include <iostream>
#include <deque>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    deque<string> q;

    while(n--) {
        string i;
        cin >> i;

        while (i.length() < 5) {
            i = '0' + i;
        }
        q.push_back(i);
    }

    int answer = -1;

    for (int i = 0; i < q.size()-2; i++) {
        for (int j = i+1; j < q.size()-1; j++) {
            for (int k = j+1; k < q.size(); k++) {

                bool flag = true;
                for (int c = 0; c < 5; c++) {
                    if (((q[i][c]-'0') + (q[j][c]-'0') + (q[k][c]-'0')) > 9) {
                        flag = false;
                        break;
                    }
                }

                if (flag) {
                    int first = stoi(q[i]);
                    int second = stoi(q[j]);
                    int third = stoi(q[k]);
                    int sum = first + second + third;

                    if (sum > answer) {
                        answer = sum;
                    }
                }
            }
        }
    }

    cout << answer;
}