#include <iostream>

using namespace std;

void table(int a, int b);

int main() {
    table(6,7);
    return 0;
}

void table(int a, int b) {
    for (int i = 0; i <= b;i++) {
        cout << i << " x " << a << " = " << i * a << "\n";
    }
}