#include <iostream>
using namespace std;

bool is_univariate(int n) {
    int ultim = n%10;
    while (n != 0) {
        if (n%10 != ultim) return false;
        n /= 10;
    }
    return true;
}

int main() {
    int n;
    int i = 1;
    while (cin >> n and n != -1 and not is_univariate(n)) {
        ++i;
    }
    if (n != -1) cout << i << endl;
    else cout << 0 << endl;
}
