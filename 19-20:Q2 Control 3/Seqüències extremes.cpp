#include <iostream>
#include <vector>

using namespace std;

bool es_extrema(const vector <int>& v, int& i, int& j) {
    i = 0;
    j = (int)v.size() - 1;
    int suma = v[i] - v[j];
    while (suma != 0 and i < j) {
        if (suma > 0) {
            --j ;
            suma = suma - v[j];
        } else {
            ++i ;
            suma = suma + v[i];
        }
    }
    return suma == 0;
}


int main() {
    int n;
    while (cin >> n) {
        vector <int> v(n);
        for (int i = 0; i < n; ++i) cin >> v[i];
        int i, j;
        if (es_extrema(v, i, j)) {
            cout << i << ' ' << j << endl;
        } else {
            cout << "no" << endl;
        }
    }
}
