#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<string> split(string str, char d) {
    vector<string> result;
    string temp;
    stringstream ss(str);

    while (getline(ss, temp, d)) {
        result.push_back(temp);
    }

    return result;
}

int main() {
    string num;
    cin >> num;

    vector<string> nums = split(num, '-');

    cout << nums[0] << '-' << nums[2] << '-' << nums[1];
}