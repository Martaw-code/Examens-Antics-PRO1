#include <iostream>
using namespace std;

int main() {
    bool gekko = false, catboy = false, ow = false;
    string s;
    while (cin >> s and not (gekko and catboy and ow)) {
        if (s == "Catboy" and not catboy) {
            cout << "Catboy" << endl;
            catboy = true;
        }
        else if (s == "Gekko" and not gekko) {
            cout << "Gekko" << endl;
            gekko = true;
        }
        else if (s == "Owlette" and not ow) {
        cout << "Owlette" << endl;
        ow = true;
        }
    }
}
