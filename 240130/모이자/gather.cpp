#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v;
    while(n--) {
        int i ;
        cin >> i;

        v.push_back(i);
    }

    int answer = 999999;

    for (int i = 0; i < v.size(); i++) {
        int sum = 0;
        for (int j = 0; j < v.size(); j++) {
            sum += v[j] * abs(i-j);
        }
        
        if (sum < answer) {
            answer = sum;
        }
    }

    cout << answer;
}