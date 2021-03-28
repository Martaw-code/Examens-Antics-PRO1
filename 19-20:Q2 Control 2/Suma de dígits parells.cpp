#include <iostream>
using namespace std;

// Pre: n >= 0
// Post: retorna la suma dels dígits parells de n
int suma_parells(int n) {
    //Cas Basic
    if (n == 0) return 0;
    //Recursio
    //Si el nombre és parell --> n mod 2 --> residu és 0 -> sumem
    if (n%2 == 0) return n%10 + suma_parells(n/10);
    //Altrament el residu de n mod 2 = 1 --> senar i saltem al seguent digit
    else return suma_parells(n/10);
}

int main() {
    int x;
    while (cin >> x) cout << suma_parells(x) << endl;
}
