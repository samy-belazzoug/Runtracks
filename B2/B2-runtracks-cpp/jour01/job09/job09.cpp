#include <iostream>
using namespace std;

int minimum(int tab[],int size);

int main() {
    int tab[] = {6,3,1,4,5,0,2};
    cout << minimum(tab,6) << endl;
    return 0;
}

int minimum(int tab[],int size) {
    int *minimum = &tab[0];
    for (int i = 1; i <= size; i++) {
        if (*minimum > tab[i]) {
            minimum = &tab[i];
        }
    }
    return *minimum;
}