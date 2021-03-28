#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> Row;
typedef vector<Row> Matrix;

bool isParchessi(const Matrix& m, int& up, int& down, int& left, int& right) {
    for (int i = 0; i < m.size(); ++i) {
        for (int j = 0; j < m.size(); ++j) {
            if (i < m.size()/2 and j < m.size()-1-i and j > i) up += m[i][j];
            if (i > m.size()/2 and j > m.size()-1-i and j < i) down += m[i][j];
            if (j < i and i < m.size()-1-j) left += m[i][j];
            if (j > i and i > m.size()-1-j) right += m[i][j];
        }
    }
    if (up == down and right == left) return true;
    else return false;
}

int main() {
    int n;
    while (cin >> n) {
        Matrix mat(n,Row(n));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> mat[i][j];
            }
        }
        int up = 0, down = 0, left = 0, right = 0;
        bool q = isParchessi(mat, up, down, left, right);
        if (q) cout << "true";
        else cout << "false";
        cout << ": " << up << ' ' << down << ", " << left << ' ' << right << endl;
    }
}
