#include <iostream>
using namespace std;
// Pre: c es un caracter
// Post: retorna true si c es una lletra, false en cas contrari
bool es_letra(char c) {
    return ('a' <= c and c <= 'z') or ('A' <= c and c <= 'Z');
}

void signos_letras() {
    char c;
    while (cin >> c) {
        bool lletra = es_letra(c);
        if (not lletra) cout << c;
        signos_letras();
        if (lletra) cout << c;
    }
}


int main () {
    signos_letras();
    cout << endl;
}
