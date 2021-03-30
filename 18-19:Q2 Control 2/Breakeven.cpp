#include <iostream>
#include <vector>

using namespace std;

//O(n) així passa el privat
int breakeven2(const vector<int>& v, int suma) {
    int sumaEsquerra = 0;
    for (int i = 0; i < (int)v.size(); ++i) {
        //retornem la posició d'equilibri
        if(sumaEsquerra == suma) {
            return i+1;
        }
        sumaEsquerra += v[i];
        suma -= v[i];
    }
    //no tenim punt d'equilibri
    return -1;
}
/*
//O(n^2) no passa privat(EE)
int breakeven(const vector<int>& v) {
    for (int i = 0; i < (int)v.size(); ++i) {
        int sumaEsquerra = 0;
        int sumaDreta = 0;
        //sumaEsquerra
        for (int j = 0; j < i; j++) {
            sumaEsquerra += v[j];
        }
        //sumaDreta
        for(int j = i; j < (int)v.size(); j++) {
            sumaDreta += v[j];
        }
        //retornem la posició d'equilibri
        if (sumaEsquerra == sumaDreta)
          return i+1;
        }
    //no tenim punt d'equilibri
    return -1;
}
*/

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    int suma = 0;
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        suma += v[i];
    }
    //cout << breakeven(v) << endl;
    cout << breakeven2(v,suma) << endl;
}
    
