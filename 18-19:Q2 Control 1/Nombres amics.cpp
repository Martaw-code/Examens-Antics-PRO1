#include <iostream>
using namespace std;
//amics --> mateix index, no es zero i els nombres son positius
//index es diferencia entre divisors - nombre = altre nombre

int abundance(int n) {
    int suma = 0;
    for (int i = 1; i < n; ++i) {
        if (n%i == 0) suma +=i;
    }
    if (suma > n) return (suma-n);
    else return 0;
}

int main() {
    int x, y;
    while (cin >> x >> y) {
        bool amics = false;
        int ax = abundance(x);
        int ay = abundance(y);
        
        if (ax != 0 and ay != 0 and ax == ay) amics = true;
        cout << ax << ' ' << ay;
        if (amics) cout << " friends" << endl;
        else cout << " not friends" << endl;
        amics = false;
   }
}
