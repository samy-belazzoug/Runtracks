#include <iostream>

using namespace std;

int is_greater(int a, int b, int c);

int main() {
    cout << is_greater(5,1,2) << "\n";
    cout << is_greater(5,10,3) << "\n";
    cout << is_greater(1,3,11) << "\n";

    return 0;
}

int is_greater(int a, int b, int c) {
    int greater = a;
    if (greater < b) {
        greater = b;
    }
    if (greater < c) {
        greater = c;
    }
    return greater;
}