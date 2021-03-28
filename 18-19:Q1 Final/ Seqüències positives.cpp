#include <iostream>
using namespace std;

int main() {
    //Llegim el nombre*2 de valors que hi haura a la seq
    //Inicialitzem els pos/neg/totals
    int n, postot = 0, negtot = 0, neutot = 0;
    //mentres que la llista no acabi amb 0
    while (cin >> n and n != 0) {
        //Llegim els string mentre iterem sobre els n*2 elements
        string s1, s2;
        //nombre de si's segons del total
        int pos1 = 0, pos2 = 0;
        for (int i = 0; i < n; ++i) {
            cin >> s1 >> s2;
            if (s1 == "si") ++pos1;
            if (s2 == "si") ++pos2;
        }
        if (pos1 > pos2) ++postot;
        else if (pos2 > pos1) ++negtot;
        else ++neutot;
    }
    cout << postot << ' ' << negtot << ' ' << neutot << endl;
}
