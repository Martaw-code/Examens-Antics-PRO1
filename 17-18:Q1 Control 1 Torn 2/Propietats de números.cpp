#include <iostream>
using namespace std;

int main() {
    //Llegim tres senters tq x1,x2,x3 >= 100 and <= 999
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;
    //Mirem la relació del primer i ultim digit de cada nombre
    
    //Agafem l'ultim digit dels tres nombres
    int x1u = x1%10, x2u = x2%10, x3u = x3%10;
    //Dividim el digit entre 100 perquè només tingui una xifra restant
    int x1p = x1/100, x2p = x2/100, x3p = x3/100;
    //Un cop tenim els tres nombres amb una xifra, n'agafem el residu
    int x1d= x1p%10, x2d = x2p%10, x3d = x3p%10;
    //Comparem els tres nombres
    if ((x1u == x1d) and (x2u == x2d) and (x3u == x3d)) {
        if (x1 < x2 and x2 < x3) cout << "3-Increasing" << endl;
        else if (x1 > x2 and x2 > x3) cout << "3-Decreasing" << endl;
        else cout << "Nothing" << endl;
    }
    else cout << "Nothing" << endl;
}
