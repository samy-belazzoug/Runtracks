#include <iostream>

using namespace std;

void exchange(int *n, int *m);

int main() {
    int n = 10;
    int m = 20;
    cout << "n = " << n << "\n" << "b = " << m << "\n";
    exchange(&n,&m);
    cout << "n = " << n << "\n" << "m = " << m << "\n";
}

void exchange(int *n, int *m) {
    int c = *n;
    *n = *m;
    *m = c;
}