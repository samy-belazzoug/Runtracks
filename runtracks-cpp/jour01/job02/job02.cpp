#include <iostream>
using namespace std;

int multiplication(int a, int b);

int main() {
    int c = multiplication(5,3);
    //Si l'utilisateur veut afficher le résultat
    cout << "Resultat : " << c << "\n";
    return 0;
}

int multiplication(int a, int b) {
    return a * b;
}