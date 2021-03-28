#include <iostream>
using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(2);
    string tipus;
    while (cin >> tipus and tipus != "acabar") {
        if (tipus == "perimetro") {
            double x, y, z;
            cin >> x >> y >> z;
            cout << x+y+z << endl;
        }
        if (tipus == "area") {
            double x, y;
            cin >> x >> y;
            cout << x*y/2 << endl;
        }
    }
}
