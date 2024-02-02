#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

int main() {
    int m1, d1, m2, d2;
    cin >> m1 >> d1 >> m2 >> d2;

    vector<int> month = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    vector<string> day = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
    
    int first = d1;
    for (int i = 1; i < m1; i++) {
        first += month[i];
    }

    int second = d2;
    for (int i = 1; i < m2; i++) {
        second += month[i];
    }

    int diff = first - second;
    if (diff > 0) {
        cout << day[7 - ((first - second) % 7)];
    } else {
        cout << day[(second - first) % 7];
    }
}