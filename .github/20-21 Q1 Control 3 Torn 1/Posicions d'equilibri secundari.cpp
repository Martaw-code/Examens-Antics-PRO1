#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef vector<int> Fila;
typedef vector<Fila> Matriu;

// Pre: f > 0, c > 0; a l'entrada hi ha una matriu d'enters de dimensions f*c
// Post: retorna la matriu d'enters que hi havia a l'entrada
Matriu read_matriz(int f, int c) {
    Matriu mat(f, Fila(c));
    for (int i = 0; i < f; ++i) {
        for (int j = 0; j < c; ++j) {
            cin >> mat[i][j];
        }
    }
    return mat;
}

int main() {
    int f, c;
    cin >> f >> c;
    Matriu mat = read_matriz(f, c);
    int i, j;
    while (cin >> i >> j) {
        int sumaMatriuSup = 0;
        for (int fila = 0; fila <= i; ++fila) {
            for (int col = j; col <= c-1; ++col) {
                sumaMatriuSup += mat[fila][col];
            }
        }
        int sumaMatriuInf = 0;
        for (int fila = i; fila <= f-1; ++fila) {
            for (int col = 0; col <= j; ++col) {
                sumaMatriuInf += mat[fila][col];
            }
        }
        if (sumaMatriuSup == sumaMatriuInf) {
            cout << "si: " << sumaMatriuSup << endl;
        } else {
            cout << "no: " << sumaMatriuSup << ", " << sumaMatriuInf << endl;
        }
    }
}