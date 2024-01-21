#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    cin >> str;

    if (str.find("ee") != string::npos) {
        cout << "YES" << ' ';
    } else {
        cout << "NO" << ' ';
    }


    if (str.find("ea") != string::npos) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}