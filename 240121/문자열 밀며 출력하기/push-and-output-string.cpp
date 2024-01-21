#include <iostream>
#include <string>
#include <deque>

using namespace std;

int main() {
    string str;
    cin >> str;

    cout << str << '\n';

    deque<char> queue(str.begin(), str.end());

    for (int i = 0; i < queue.size(); i++) {
        queue.push_back(queue.front());
        queue.pop_front();

        for (char q: queue) {
            cout << q;
        }
        cout << '\n';
    }
}