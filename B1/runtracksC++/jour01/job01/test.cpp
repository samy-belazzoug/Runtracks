#include <iostream>

using namespace std;

int main() {
    char c = '\x01';
    short int p = 10;
    char z = p + c;
    printf("c = %d\np = %d\nz = %d\n",c,p,z);
    return 0;
}