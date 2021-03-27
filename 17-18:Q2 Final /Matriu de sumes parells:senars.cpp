#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector <int> > Matrix;

Matrix read_matrix(int n, int m) {
    Matrix mat(n, vector<int>(m));
    for (int i = 0; i <n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> mat[i][j];
        }
    }
    return mat;
}

bool even_odds_matrix(const Matrix& M) {
    int parell = 0, senar = 0;
    for (int i = 0; i < M.size(); ++i) {
        for (int j = 0; j < M[0].size(); ++j) {
            if (i%2 == 0 and M[i][j]%2 == 0) parell += M[i][j];
            if (i%2 != 0 and M[i][j]%2 != 0) senar += M[i][j];
        }
    }
    return (parell == senar);
}

int main() {
    int n, m;
    while (cin >> n >> m) {
        Matrix mat = read_matrix(n, m);
        if (even_odds_matrix(mat)) cout << "true" << endl;
        else cout << "false" << endl;
    }
}