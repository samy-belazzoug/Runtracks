#include <iostream>
#include <math.h>

using namespace std;

int square_sum(int n);

int main() {
    cout << square_sum(10) << "\n" ;
    return 0;
}

int square_sum(int n) {
    if (n > 5) {
        int result = 0;
        for (int i = 5; i <= n; i++) {
            int n_pow = pow(i,3);
            result += n_pow;
        }
        return result;
    }
    else {
        cout << "not possible!";
        return 1;
    }
}