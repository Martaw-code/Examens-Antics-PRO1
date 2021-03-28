#include <iostream>
using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(2);
    string o;
    while (cin >> o and o != "parar"){
        double a, b;
        if (o == "suma") {
            cin >> a >> b;
            cout << double(a + b) <<endl;
        }
        if (o == "resta") {
            cin >> a >> b;
            cout << double(a - b) << endl;
        }
        if (o == "cambio") {
            cin >> a;
            cout << a * -1 <<endl;
        }
    }
}
