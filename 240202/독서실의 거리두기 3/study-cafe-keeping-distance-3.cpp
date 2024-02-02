#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int i;
    cin >> i;

    string str;
    cin >> str;

    vector<int> v(str.begin(), str.end());

    int max = 0;
    int s = 0;
    int e = 0;
    bool flag = false;

    for (int i = 0; i < v.size(); i++) {
        int temp = 0;
        if (v[i] == '1') {
            for (int j = i+1; j < v.size(); j++) {
                if (v[j] == '0') {
                    temp++;
                } else {
                    if (temp > max) {
                        s = i;
                        e = j;
                        max = temp;
                    }
                    break;
                }
            }
        }
    }

    if (max % 2 == 0) {
        cout << max / 2;
    } else {
        cout << max / 2 + 1;
    }
}