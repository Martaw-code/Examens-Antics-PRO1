#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    int n;
    while (cin >> n) v.push_back(n);
    if (v[0] != 0) cout << "aterrant a: " << v[0] << endl;
    for (int i = 0; i < (int)v.size();) {
        int puntpartida = i;
        //el # de salts el determina el nombre v[i]
        i += v[i];
        if (i >= (int)v.size() or v[i] == 0) {
            break;
        } else {
            //hem d'iterar entre l'element a la posició i+1 d'on saltem fins a l'i-èssim salt per
            //trobar un possible parell entre les dues posicions
            for (int pos = puntpartida+1; pos < i; ++pos) {
                if (v[pos]%2 == 0) {
                    cout << "sobrevolant parell: " << v[pos] << endl;
                }
            }
            cout << "aterrant a: " << v[i] << endl;
            puntpartida = i;
        }
    }
}
