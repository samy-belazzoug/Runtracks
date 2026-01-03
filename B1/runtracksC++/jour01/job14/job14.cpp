#include <iostream>
#include <string>

using namespace std;
int reverse(int n);

int main() {
    cout << reverse(12345) << "\n";
    return 0;
}

int reverse(int n) {
    string s =  to_string(n);
    string rev = s;
    for (int i = 0; i <= s.length(); i++) {
        rev[i] = s[(s.length()-1)-i];
    }
    int to_int = stoi(rev);
    return to_int;
}