#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v;

    while(n--) {
        int i;
        cin >> i;

        v.push_back(i);
    }

    int answer = 0;

    for (int i = 0; i < v.size()-1; i++) {
        vector<int> temp = {v[i]};

        for (int j = i+1; j < v.size(); j++) {
            if (temp.back() < v[j]) {
                temp.push_back(v[j]);
            }

            if (temp.size() == 3) {
                answer++;
                break;
            }
        }
    }

    cout << answer;
}