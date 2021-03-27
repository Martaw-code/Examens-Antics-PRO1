#include <iostream>
using namespace std;

int main() {
    //Llegim els dos jugadors
    string a, b;
    cin >> a >> b;
    //Llegim les tirades dels jugadors
    char ai, bi;
    //declarem els empats, el total, i els cops que guanyen ambdos
    //jugadors
    int ties = 0, total = 0, aguanya = 0, bguanya = 0;
    while (cin >> ai >> bi) {
        //si es produeix empat sumem al total i als empats
        if (ai == bi) ++ties, ++total;
        //Possibles jugades on segur que guanya a
        else if ((ai == 'P' and bi == 'R') or (ai == 'T' and bi == 'P')
            or (ai == 'R' and bi == 'T')) ++total, ++aguanya;
        //La resta les guanya b
        else ++bguanya, ++total;
    }
    cout << a << ' ' << aguanya << endl;
    cout << b << ' ' << bguanya << endl;
    cout << "Ties " << ties << endl;
    cout << "Total " << total << endl;
}
