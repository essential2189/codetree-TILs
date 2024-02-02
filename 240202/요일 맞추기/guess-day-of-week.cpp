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
    
    if (m1 == m2) {
        int temp = d2 - d1;
        if (temp < 0) {
            temp += 7;
        }
        int date = temp % 7;;
        cout << day[date];
        return 0;
    }

    int date = month[m1] - d1;

    for (int i = m1+1; i < m2; i++) {
        date += month[i];
    }
    date += d2;

    cout << day[date % 7];
}