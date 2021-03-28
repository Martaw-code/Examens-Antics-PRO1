#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    while ( cin >> n ) {
        vector <int> v(n);
        for (int i = 0; i < n; ++i) cin >> v[i];
        int comptador = 0;
        for (int i = 0; i < v.size(); ++i) {
            int suma = 0, j = i - 1;
            while (j >= 0 and suma < v[i]) {
                suma += v[j];
                --j;
            }
            if (suma == v[i]) ++comptador;
        }
        cout << comptador << endl;
        comptador = 0;
    }
}
