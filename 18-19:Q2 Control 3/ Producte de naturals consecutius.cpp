#include <iostream>
using namespace std;


// Pre: x>0
int product_of_consecutive(int x) {
    int cons1 = 1, cons2 = x;
    int m = (cons1+cons2)/ 2;
    while (cons1 <= cons2) {
        if (m*(m+1) < x) ++cons1;
        if (m*(m+1) > x) --cons2;
        if (m*(m+1) == x) return m;
        m = (cons1+cons2)/2;
    }
    return -1; //cons1 > cons2 (impossible)
}

int main() {
   int x;
   while (cin >> x) {
      int k = product_of_consecutive(x);
      if (k == -1) cout << x << " NO" << endl;
      else cout << x << " = " << k << "*" << k+1 << endl;
   }
}
