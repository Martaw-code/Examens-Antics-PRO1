#include <iostream>
using namespace std;

// Pre: c es una lletra minuscula
// Post: retorna true si c es una vocal, false en cas contrari
bool es_vocal(char c) {
    return c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u';
}

void consonantes_vocales() {
    char c;
    while ( cin >> c) {
        bool vocal = es_vocal(c);
        if ( not vocal) cout << c;
        consonantes_vocales();
        if ( vocal) cout << c;
    }
}


int main() {
    consonantes_vocales();
    cout << endl;
}
