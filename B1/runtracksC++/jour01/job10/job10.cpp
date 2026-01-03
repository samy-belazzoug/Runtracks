#include <iostream>

using namespace std;

float prix_TTC(float prix_HT, float TVA, float prix_kilo);


float prix_TTC(float prix_kilo_HT, float nb_kilo, float TVA) {
    if (0 < TVA && TVA <= 1) {
        return (prix_kilo_HT * nb_kilo) * TVA;
    }
    else {
        cout << "Not possible!" << "\n";
    }
}