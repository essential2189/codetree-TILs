#include <iostream>
#include <deque>

using namespace std;

int main() {
    int n;
    cin >> n;

    deque<int> v;

    while(n--) {
        int i;
        cin >> i;
        v.push_back(i);
    }

    int answer = 99999999;
    for (int i = 0; i < v.size(); i++) {
        int temp = 0;
        for (int j = 0; j < v.size(); j++) {
            temp += v[j] * j;
        }

        if (temp < answer) {
            answer = temp;
        }
        
        int top = v.front();
        v.push_back(top);
        v.pop_front();
    }

    cout << answer;
}