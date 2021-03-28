#include <iostream>

using namespace std;
q
bool is_ptg(int a, int b) {
    // a^2 + b^2 = c^2 (T.Pitàgores)
    int c = a*a + b*b;
    for (int i = 2; i*i <= c; ++i) {
        if (c == i*i) return true;
    }
    return false;
}

int main() {
    int a, b;
    cin >> a;
    bool trobat = false;
    int i = 0, pair_a = 0, pair_b = 0;
    while (cin >> b and not trobat) {
        ++i;
        if (is_ptg(a, b)) {
            trobat = true;
            pair_a = a, pair_b = b;
        }
        a = b;
    }
    if (trobat) cout << "First pythagorean pair " << pair_a << ' ' << pair_b << " at position " << i << endl;
    else  cout << "No pythagorean pairs" << endl;
}
  
