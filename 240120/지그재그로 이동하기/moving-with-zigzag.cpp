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

    if (a < b) {
        vector<int> stack = {a};

        while (b > stack.back()) {
            if (flag % 2 == 0) {
                stack.push_back(a + count);
            } else {
                stack.push_back(a - count);
            }

            answer += abs(stack[stack.size()-1] - stack[stack.size()-2]);
            count *= 2;
            flag++;
        }

        answer -= stack.back() - b;
        cout << answer;
    } else {
        vector<int> stack = {a};

        while (b < stack.back()) {
            if (flag % 2 == 0) {
                stack.push_back(a + count);
            } else {
                stack.push_back(a - count);
            }

            answer += abs(stack[stack.size()-1] - stack[stack.size()-2]);
            count *= 2;
            flag++;
        }

        answer -= stack.back() - b;
        cout << answer;
    }
}