#include <iostream>
#include <vector>
using namespace std;

typedef  vector<vector<int> > Mat;

Mat llegirMat(int n, int m) {
   Mat A(n, vector<int>(m));
   for (int i = 0; i < n; ++i) {
      for (int j = 0; j < m; ++j) {
         cin >> A[i][j];
      }
   }
   return A;
}

bool sumes_decreixents (const Mat & A){
    vector<int> suma(A.size());
    for (int k = 0; k < suma.size();) {
        for (int i = 0; i < A.size(); ++i) {
            for (int j = 0; j < A[0].size(); ++j) {
                suma[k] += A[i][j];
            }
            ++k;
        }
    }
    for (int i = 0; i < suma.size()-1; ++i) {
        if (suma[i] <= suma[i+1]) return false;
    }
    return true;
}

int main() {
   int n,m;
   while (cin >> n >> m) {
       Mat A = llegirMat(n,m);
       if (sumes_decreixents(A)) cout << "YES" << endl;
       else cout << "NO" << endl;
   }
}
