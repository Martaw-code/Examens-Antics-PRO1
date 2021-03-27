#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> Row;
typedef vector<Row> Matrix;

// read matrix NxN from cin
Matrix readMatrix(int n) {
    Matrix m(n,vector<int>(n));
    for (int i=0; i<n; ++i)
        for (int j=0; j<n; ++j)
            cin >> m[i][j];
    return m;
}

// print given matrix to cout
void printMatrix(const Matrix &m) {
    int n = m.size();
    for (int i=0; i<n; ++i) {
        cout << m[i][0];
        for (int j=1; j<n; ++j)
            cout << " " << m[i][j];
        cout << endl;
    }
    cout << endl;
}

// find position of largest element in diagonal, from position (i,i) to the end.
// If there are more than one elements with maximum value, return position
// of the first one.
int maxpos(const Matrix &m, int i) {
    int p=i;
    for (int j=i+1; j<m.size(); ++j) {
        if (m[j][j]>m[p][p]) p=j;
    }
    return p;
    
}

// swap row i and row p in given matrix
void swaprow(Matrix &m, int i, int p) {
    if (i==p) return;
    for (int j=0; j<m.size(); ++j) {
        int z = m[i][j];
        m[i][j] = m[p][j];
        m[p][j] = z;
    }
    
}

// swap column j and column p in given matrix
void swapcolumn(Matrix &m, int j, int p) {
    if (j==p) return;
    for (int i=0; i<m.size(); ++i) {
        int z = m[i][j];
        m[i][j] = m[i][p];
        m[i][p] = z;
    }
    
}

// reorder matrix
void reorder(Matrix &m) {
    int n = m.size();
    for (int i=0; i<n-1; ++i) {
        int p = maxpos(m,i);
        swaprow(m,i,p);
        swapcolumn(m,i,p);
    }
    
}


int main() {
    int n;
    while (cin>>n) {
        Matrix m = readMatrix(n);
        reorder(m);
        printMatrix(m);
    }
}