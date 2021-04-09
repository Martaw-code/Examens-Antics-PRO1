#include <iostream>
using namespace std;

int main() {
    //Llegim 4 valors naturals entre 0 i 255
    int x1, x2, x3, x4;
    cin >> x1 >> x2 >> x3 >> x4;
    //Agafem la ultima xifra de cada nombre i mirem la paritat
    int x1p = x1%10, x2p = x2%10, x3p = x3%10, x4p = x4%10;
    if (((x1p%2 == 0 and x3p%2 == 0) and (x2p%2 != 0 and x4p%2 != 0)) or
        ((x1p%2 != 0 and x3p%2 != 0) and (x2p%2 == 0 and x4p%2 == 0))) {
            cout << "LBA" <<endl;
        }
    //Si és creixent
    if (x1 < x2 and x2 < x3 and x3 < x4) cout << "Increasing" <<endl;
    //Decreixent
    if (x1 > x2 and x2 > x3  and x3 > x4) cout << "Decreasing" <<endl;
    //Si són iguals
    if (x1 == x3 and x2 == x4) cout << "Folded" <<endl;
}
