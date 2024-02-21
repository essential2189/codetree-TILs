#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

bool contain(vector<int> vv, double i) {
    for (int a: vv) {
        if (a == (double)i) {
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

    int answer = v.size();

    for (int i = 0; i < v.size()-1; i++) {
        for (int j = i+1; j < v.size(); j++) {
            double sum = accumulate(v.begin()+i, v.begin()+j+1, 0);

            double avg = sum / (j-i);
            if (contain(vector<int>(v.begin()+i, v.begin()+j+1), avg)) {
                answer++;
            }
        }
    }

    cout << answer;
}