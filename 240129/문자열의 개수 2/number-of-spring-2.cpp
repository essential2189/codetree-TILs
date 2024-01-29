#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int count = 0;
    vector<string> v;

    while(true) {
        string str;
        cin >> str;

        if (str == "0") {
            break;
        }
        if (count % 2 != 0) {
            v.push_back(str);
        }

        count++;
    }

    cout << count << '\n';

    for (string s:v) {
        cout << s << '\n';
    }
}