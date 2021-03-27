#include <iostream>
using namespace std;

int main() {
    //llegim el primer nombre
    int x1;
    cin >> x1;
    //fem una copia a c del primer nombre
    //legim el seguent nombre x2
    //tenim a count 1 nombre que es el primer
    //i és el comptador de la posició
    int c = x1, x2, count = 1, i = 1;
    while (cin >> x2) {
        //incremente, posicio
        ++i;
        //mirem si esta en posicio senar i comparem amb el primer nombre
        if (i%2 != 0) {
            if (x2 == c) ++ count;
        }
        //movem un element de la seq.
        x1 = x2;
    }
    cout << count << endl;
}
