#include <iostream>
using namespace std;

bool parite(int n);

int main() {
    bool n_p = parite(5);
    bool n_i = parite(2);

    cout << "5 est pair ? " << n_p << "\n";
    cout << "2 est pair ? " << n_i << "\n"; 

    return 0;
}

bool parite(int n) {
    //Retourne 0 si il est impair et 1 si il est pair
    return n % 2 == 0;
}