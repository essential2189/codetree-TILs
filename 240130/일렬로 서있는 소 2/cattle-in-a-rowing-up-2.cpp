#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a;
    while(n--) {
        int i;
        cin >> i;
        a.push_back(i);
    }

    int answer = 0;
    for (int i = 0; i < a.size(); i++) {
        for (int j = 0; j < a.size(); j++) {
            for (int k = 0; k < a.size(); k++) {
                if (i < j && j < k) {
                    if (a[i] <= a[j] && a[j] <= a[k]) {
                        answer++;
                    }
                }
            }
        }
    }

    cout << answer;
}