#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        vector <int> v(n);
        for (int i = 0; i < n; ++i) cin >> v[i];
        int comptador = 0;
        for (int i = 0; i < v.size(); ++i) {
            int suma = 0;
            int j = i + 1;
            while (j < v.size() and suma < v[i]) {
                suma += v[j], ++j;
            }
            if (suma == v[i]) ++comptador;
        }
        cout << comptador << endl;
    }
}
