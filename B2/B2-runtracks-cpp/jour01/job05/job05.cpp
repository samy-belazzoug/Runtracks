#include <iostream>
using namespace std;

void echange(int *a, int *b);

int main() {
    int a = 32;
    int b = 16; 
    cout << "Avant echange : \n";
    cout << "a = " << a << "\n";
    cout << "b = " << b << "\n";
    echange(&a,&b);
    cout << "Apres echange : \n";
    cout << "a = " << a << "\n";
    cout << "b = " << b << "\n";

    return 0;
}

void echange(int *a, int *b) {
    //a takes the b value. b takes the a value
    int c = *b;
    *b = *a;
    *a = c;
}