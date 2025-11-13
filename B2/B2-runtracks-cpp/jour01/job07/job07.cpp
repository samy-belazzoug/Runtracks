#include <iostream>
#include <string>
using namespace std;

int inversion(int a); 

int main() {
    return 0;
}

int inversion(int a) {
    string a_s = to_string(a);
    int length = a_s.length();
    string a_s_inverted = " ";

    for (int i = 0; i < length; i++) {
        a_s_inverted += a_s[(length-1)-i];
    }

    int b = stoi(a_s_inverted);
    return b;
    
}