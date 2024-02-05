#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v;
    while(n--) {
        int  i;
        cin >> i;

        v.push_back(i);
    }

    int answer = 9999999;

    for (int i = 0; i < v.size(); i++) {
        int temp = 0;
        for (int j = 0; j < v.size(); j++) {
            if (i != j){
                temp += v[j] * abs(i-j);
            }
        }

        if (temp < answer) {
            answer = temp;
        }
    }

    cout << answer;
}