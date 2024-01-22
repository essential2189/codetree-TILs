#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<string> split(string str, char d) {
    vector<string> result;
    stringstream ss(str);
    string temp;

    while(getline(ss, temp, d)) {
        result.push_back(temp);
    }

    return result;
}

int main() {
    string str;

    getline(cin, str);
    cin.ignore();

    vector<string> v = split(str, ' ');

    for (int i = 0; i < v.size(); i++) {
        if ((i+1) % 2 == 0) {
            cout << v[i] << '\n';
        }
    }
}