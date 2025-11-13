#include <iostream>
using namespace std;

int minimum(int *tab[],int size);

int main() {
    int a = 6;
    int *ap = &a;
    int b = 5;
    int *bp = &b;
    int c = 7;
    int *cp = &c;
    int d = 0;
    int *dp = &d;
    int e = 3;
    int *ep = &e;
    int f = 9;
    int *fp = &f;
    int *tab[] = {ap,bp,cp,dp,ep,fp};
    cout << minimum(tab,6) << endl;
    return 0;
}

int minimum(int *tab[],int size) {
    int *minimum = tab[0];
    for (int i = 1; i < size; i++) {
        if (*minimum > *tab[i]) {
            minimum = tab[i];
        }
    }
    return *minimum;
}