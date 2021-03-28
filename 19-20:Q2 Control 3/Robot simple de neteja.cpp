#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> Fila;
typedef vector<Fila> Matriu;

void llegir_matriu(Matriu& m) {
    for (int i = 0; i < m.size(); ++i) {
        for (int j = 0; j < m[0].size(); ++j) {
            cin >> m[i][j];
        }
    }
}

int main() {
    int m, n;
    cin >> m >> n;
    Matriu mat(m, Fila(n));
    llegir_matriu(mat);
    int suma = 0;
    for (int j = 0; j < n; ++j) {
        if (j%2 == 0) {
            for (int i = 0; i < m; ++i) {
                if (mat[i][j] == 0) cout << i << ' ' << j << endl;
                suma += mat[i][j];
            }
        }
        else {
            for (int i = m-1; i >= 0; --i) {
                if (mat[i][j] == 0) cout << i << ' ' << j << endl;
                suma += mat[i][j];
            }
        }
        cout << "Total en columna " << j << ": " << suma << endl;
    }
}
