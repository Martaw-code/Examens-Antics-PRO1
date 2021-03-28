#include <iostream>
using namespace std;

bool discontinued(int minim, int periode, int & total) {
    int vendes, suma = 0, venda1;
    bool discontnued = false;
    while (cin >> venda1 and venda1 != -1) {
        suma = 0;
        for ( int i = 0; i < periode - 1; ++i) {
            cin >> vendes;
            suma += vendes;
        }
        suma += venda1;
        if (suma < minim)discontnued = true;
        else total += suma;
    }
    if (discontnued) return false;
    return true;
}

int main() {
    string verdures;
    int minim, periode, total = 0;
    while ( cin >> verdures) {
        cin >> minim >> periode;
        bool k = discontinued(minim,periode,total);
        if (k) cout << verdures << ' ' << total <<endl;
        else cout <<verdures << " discontinued" <<endl;
        total = 0;
    }
}