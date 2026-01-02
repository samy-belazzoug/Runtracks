#include <iostream>

using namespace std;

int multiplication(int a, int b);

int main() {
    cout << multiplication(5,3) << '\n';
    return 0;
}

int multiplication(int a, int b) {
    return a * b;
}