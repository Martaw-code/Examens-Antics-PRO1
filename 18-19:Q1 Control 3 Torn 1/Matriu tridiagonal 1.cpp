#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> Row;
typedef vector<Row> Matrix;

// Pre: mat is an n*n square matrix, where n >= 2
// Post: it returns true if mat is a zero-sum tridiagonal matrix,
//       false otherwise
bool is_zerosum_tridiagonal(const Matrix& mat) {
    int n = mat.size();
    int suma_d = 0;
    int suma_di = 0;
    int suma_ds = 0;
    for ( int i = 0; i < n; ++i){
        for ( int j = 0; j < n; ++j){
            if (i == j) suma_d += mat[i][j];
            if ( j == i+1) suma_ds +=mat[i][j];
            if ( j == i-1) suma_di +=mat[i][j];
            if ( mat[i][j] != 0 and not (j == i or j == i+1 or j ==i-1)) return false;
        }
    }
    int suma= suma_di + suma_ds;
    if ( suma_d == suma) return true;
    else return false;
}


Matrix read_matrix(int n) {
    Matrix m(n, Row(n));
    for (int i=0; i < n; ++i)
          for (int j = 0; j < n; ++j)
               cin >> m[i][j];
    return m;
}

int main() {
    int n;
    while (cin >> n) {
          Matrix a = read_matrix(n);
          if (is_zerosum_tridiagonal(a)) cout << "TRUE" << endl;
          else cout << "FALSE" << endl;
    }
}
