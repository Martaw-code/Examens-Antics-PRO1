#include <iostream>
using namespace std;

//definició de porta logica
void logic_gate (char c, bool& x, bool& y) {
    //definició de or i and amb resp. unió i inter
    bool unio = x or y, inter = x and y;
    //assignem si és cert
    if (c == 'T') x = inter, y = unio;
    //altrament sera false
    else x = unio, y = inter;
}


int main() {
    string a, b;
    char c;
    while (cin >> c >> a >> b) {
        bool x = (a == "true");
        bool y = (b == "true");
        logic_gate(c, x, y);
        // with flag "boolalpha", the values of the booleans
        // are printed "true" or "false" instead of 1 or 0
        cout << boolalpha << x << ' ' << y << endl;
    }
}
