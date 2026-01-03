#include <iostream>

using namespace std;

float moyenne();

int main() {
    cout << moyenne() << "\n";
    return 0;
}

float moyenne() {
    /*Yes, I could have done a for loop right. But it would need
    a third variable..*/
    
    float n, moyenne = 0;
    cout << "1 : ";
    cin >> n;
    moyenne += n; 
    cout << "2 : ";
    cin >> n;
    moyenne += n; 
    cout << "3 : ";
    cin >> n;
    moyenne += n; 
    cout << "4 : ";
    cin >> n;
    moyenne += n; 
    cout << "5 : ";
    cin >> n;
    moyenne += n;
    cout << "\n";
    return  moyenne / 5;
}