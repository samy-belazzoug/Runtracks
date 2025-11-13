#include <iostream>
using namespace std;

float moyenne5();

int main() {
    float m = moyenne5();
    cout << "Moyenne = " << m << "/n";
    return 0;
}

float moyenne5() {
    //On utilise que deux variables : moyenne et input
    float moyenne = 0;
    int input;
    for (int i = 1; i < 6; i++) {
        cout << "Entrez le nombre " << i << " : ";
        cin >> input;
        moyenne += input;
    }
    return moyenne/5;
}