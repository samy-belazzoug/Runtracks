#include <iostream>
using namespace std;

float prix_TTC(float prix_kilo, float quantite, float TVA);

int main() {
    float prix = 1.4;
    float quantite = 2.5;
    float tva = 1.20;
    float ttc = prix_TTC(prix,quantite,tva);

    cout << "Le prix TTC de " << quantite << "kg de carrotes est de : " << ttc << "€\n";

    return 0;
}

float prix_TTC(float prix_kilo, float quantite, float TVA) {
    return (prix_kilo * quantite) * TVA;
}