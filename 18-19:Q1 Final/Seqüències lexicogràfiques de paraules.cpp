#include <iostream>
using namespace std;

const int NMIN = 'z' - 'a' + 1;
int main() {
    int n, count_cases = 0, casos = 0;
    while (cin >> n) {
        bool trobat = false;
        string p;
        for (int i = 0; i < n; ++i) {
            cin >> p;
            if (p[0] == char('a' + casos)) {
                trobat = true;
            }
        }
        if (trobat) ++count_cases;
        else cout << "Could not find a match for " << char('a' + casos) << endl;
        casos = (casos + 1)%NMIN;
    }
    cout << count_cases << endl;
}
