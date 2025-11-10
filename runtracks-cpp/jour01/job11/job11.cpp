#include <iostream>
using namespace std;

int swapValues(int a, int b);

int main() {
    int a = 5;
    int b = 10;
    swapValues(a,b);
    return 0;
}

int swapValues(int a, int b) {
    int &c = a;
    int &d = b;
    int e = b;
    d = c;
    c = e;
    return a,b;
}