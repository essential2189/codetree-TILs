#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    vector<int> v1 = {a, b, c, 0};
    vector<int> v2 = {a, b, c, 0};

    int n = 10;
    while (n--) {
        if (v1[1] < v1[2]) {
            v1 = {v1[0], v1[1]-1, v1[1], v1[3]+=1};
        } else if (v1[1] > v1[2]) {
            v1 = {v1[0], v1[1]+1, v1[1], v1[3]+=1};
        }

        if (v2[0] < v2[1]) {
            v2 = {v2[1], v2[1]+1, v2[2], v2[3]+=1};
        } else if (v2[0] > v2[1]) {
            v2 = {v2[1], v2[1]-1, v2[2], v2[3]+=1};
        }

        if (v1[0] < v1[1] && v1[1] < v1[2]) {
            if (v1[2] - v1[1] == 1 && v1[1] - v1[0] == 1) {
                break;
            }
        } else if (v1[0] > v1[1] && v1[1] > v1[2]){
            if (v1[0] - v1[1] == 1 && v1[1] - v1[2] == 1) {
                break;
            }
        }

        if (v2[0] < v2[1] && v2[1] < v2[2]) {
            if (v2[2] - v2[1] == 1 && v2[1] - v2[0] == 1) {
                break;
            }
        } else if (v2[0] > v2[1] && v2[1] > v2[2]){
            if (v2[0] - v2[1] == 1 && v2[1] - v2[2] == 1) {
                break;
            }
        }
    }

    cout << max(v1[3], v2[3]);
}