#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> Row;
typedef vector<Row> Matrix;

// Pre: mat is an n*n square matrix, where n >= 2
// Post: returns true if mat is an ascending tridiagonal matrix,
// false otherwise
bool is_asc_tridiagonal(const Matrix& mat){
    int i = 2;
    for ( int j = 0; j < mat.size()-1; ++j) {
        if ( mat[j][j] > mat[j+1][j+1]) return false;
    }
    for (int j = 1; j < mat.size()-1; ++j) {
        if (mat[j][j-1] > mat[j+1][j] or mat[j-1][j] > mat[j][j+1]) return false;
    }
    while (i < mat.size()) {
        for ( int j = i; j < mat.size(); ++j) {
            if ( mat[j][j-i] != 0 or mat [j-i][j] !=0) return false;
        }
        ++i;
    }
    return true;
}

Matrix read_matrix(int n) {
    Matrix m(n, Row(n));
    for (int i = 0; i < n; ++i)
          for (int j = 0; j < n; ++j)
               cin >> m[i][j];
    return m;
}

int main() {
    int n;    // dimension of the matrix
    while (cin >> n) {
          Matrix a = read_matrix(n);
          if (is_asc_tridiagonal(a)) cout << "TRUE" << endl;
          else cout << "FALSE" << endl;
     }
}
