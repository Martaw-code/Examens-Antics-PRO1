#include <iostream>
using namespace std;

int main() {
    //Llegim els tres nombres, i declarem var suma on guardarem el
    //nombre de seq. 3-increasing's
    int x1, x2, x3, suma = 0;
    while (cin >> x1 >> x2 >> x3) {
        //agafem últim digit(-) pes
        int x1p = x1%10, x2p = x2%10, x3p = x3%10;
        //dividim el nombre per quedar-nos només amb 1 xifra
        int x1u = x1/100, x2u = x2/100, x3u = x3/100;
        //agafem (la xifra de + pes) "residu"
        int x1d = x1u%10, x2d = x2u%10, x3d = x3u%10;
        //comparem els valors
        if ((x1p == x1d) and (x2p == x2d) and (x3p == x3d)) {
            //comprovem si és 3-increasing
            if (x1 < x2 and x2 < x3){
                //Augmentem la suma
                 ++suma;
            }
        }
    }
    cout << "3-Increasing: " << suma << endl;
}
