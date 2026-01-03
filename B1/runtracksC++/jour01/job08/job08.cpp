#include <iostream>

using namespace std;

bool is_bisextile(int n);

int main() {
    cout << is_bisextile(2020) << "\n";
    cout << is_bisextile(2024) << "\n";
    cout << is_bisextile(2028) << "\n";
    cout << is_bisextile(1900) << "\n";
    cout << is_bisextile(2100) << "\n";
    cout << is_bisextile(2200) << "\n";
    return 0;
}

bool is_bisextile(int n) {
    return n % 4 == 0 && n % 100 != 0 || n / 400 == 0;
}
