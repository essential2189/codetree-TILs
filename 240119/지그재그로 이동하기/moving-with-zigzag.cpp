#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int a, b;
    cin >> a >> b;

    int answer = 0;
    
    int count = 1;
    int flag = 0;

    vector<int> stack = {a};
    
    while (true) {
        if (flag % 2 == 0) {
            stack.push_back(a + count);
        } else {
            stack.push_back(a - count);
        }

        if (stack.back() > b) {
            break;
        }
        answer += abs(stack[stack.size()-1] - stack[stack.size()-2]);
        count *= 2;
        flag++;
    }

    answer += abs(b - stack[stack.size()-2]);
    cout << answer;
}