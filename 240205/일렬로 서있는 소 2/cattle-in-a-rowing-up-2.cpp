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

    for (int i = 0; i < v.size()-2; i++) {
        for (int j = i+1; j < v.size()-1; j++) {
            if (v[i] < v[j]) {
                for (int k = j+1; k < v.size(); k++) {
                    if (v[j] < v[k]) {
                        answer++;
                    }
                }
            }
        }
    }

    cout << answer;
}