#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

bool contain(vector<int> vv, int i) {
    for (int a: vv) {
        if (a == i) {
            return true;
        }
    }
    return false;
}

int main() {
    int n;
    cin >> n;

    vector<int> v;
    while (n--) {
        int i;
        cin >> i;
        v.push_back(i);
    }

    int answer = 0;

    for (int i = 0; i < v.size()-1; i++) {
        for (int j = i+1; j < v.size(); j++) {
            int sum = accumulate(v.begin()+i, v.begin()+j, 0);
            int avg = sum / (j-i);
            if (contain(vector<int>(v.begin()+i, v.begin()+j), avg)) {
                answer++;
            }
        }
    }

    cout << answer;
}