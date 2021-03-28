#include <iostream>
using namespace std;

int main() {
    //Llegim el primer i el segon nombre
    //I marca el nombre de seq.
    int x1, x2, i = 0;
    //Quan trobem la seq parem
    bool trobat = false;
    while (cin >> x1 >> x2 and not trobat) {
        //Llegim el tercer nombre i contem els trios magics
        int x3, count = 0;
        //Mentres no trobem els 3, trobat = false.
        while (cin >> x3 and x3 != 0 and not trobat) {
            if ((x1%2 == 0 and x2%2 != 0 and x3%2 == 0) or
                (x1%2 != 0 and x2%2 == 0 and x3%2 != 0)) {
                //Trio
                ++count;
                trobat = (count == 3);
            }
            //Actualitzem valors
            x1 = x2, x2 = x3;
        }
        //Augmentem el numero de la seq.
         ++i;
    }
    if (trobat) cout << i << endl;
    else cout << "none" << endl;
}
