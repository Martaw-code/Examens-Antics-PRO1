#include <iostream>
#include <vector>
using namespace std;
typedef vector <vector <int> > Matriu;

void llegir_mat( Matriu & m) {
    for (int i = 0; i < m.size(); ++i) {
        for (int j = 0; j < m[0].size(); ++j) {
            cin >> m[i][j];
        }
    }
}

bool son_iguals(const Matriu & m, int i, int j){
    for (int k = 0; k < (int)m[0].size(); ++k) {
        if (m[i][k] != m[j][k]) return false;
    }
    return true;
}
    
bool nova_fila(const Matriu & m, int i) {
    for (int j = 0; j < i; ++j) {
        if (son_iguals(m, j, i)) return false;
    }
    return true;
}

int main() {
    int f, c;
    while (cin >> f >> c) {
        Matriu m(f, vector<int> (c));
        llegir_mat(m);
        int counter = 0;
        for (int i = 0; i < f; ++i) {
            if (nova_fila(m, i)) ++counter;
        }
        cout << counter <<endl;
    }
}
