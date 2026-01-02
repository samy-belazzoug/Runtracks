#include <iostream>

using namespace std;

bool is_pair(int n);

int main() {
    cout << is_pair(2) << "\n";
    cout << is_pair(3) << "\n";
    return 0;
}

bool is_pair(int n) {
    return n % 2 == 0;
}
