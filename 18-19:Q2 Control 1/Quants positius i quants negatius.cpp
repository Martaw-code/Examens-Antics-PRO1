#include <iostream>
using namespace std;

int main() {
    int n, count = 0, pos = 0, neg = 0;
    while (cin >> n) {
        ++count;
        if (n > 0) ++pos;
        if (n < 0) ++neg;
    }
    cout << "Pos: " << pos << endl;
    cout << "Neg: " << neg << endl;
    cout << "Tot: " << count << endl;
}
