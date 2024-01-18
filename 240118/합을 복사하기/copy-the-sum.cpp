#include <iostream>

int main() {
    int a = 1;
    int b = 2;
    int c = 3;

    int temp = a + b + c;

    a = temp;
    b = temp;
    c = temp;

    std::cout << a << ' ' << b << ' ' << c;
}