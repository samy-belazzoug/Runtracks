#include <iostream>
using namespace std;

bool bissextile (int annee);

int main () {
    cout << bissextile(2024) << endl;
    cout << bissextile(2021) << endl;
    return 0;
}

bool bissextile(int annee) {
    return annee % 4 == 0;
}