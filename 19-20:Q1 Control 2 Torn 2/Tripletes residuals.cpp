#include <iostream>
using namespace std;

int main() {
    int n, tripletes = 0;
    while (cin >> n) {
        int x1, x2;
        cin >> x1 >> x2;
        int tripleta_res = 0;
        for (int i = 2; i < n; ++i) {
            int x3;
            cin >> x3;
            if (x1%x2 == x3) {
                ++tripleta_res;
                ++tripletes;
            }
            x1 = x2;
            x2 = x3;
        }
        cout << tripleta_res << endl;
    }
    cout << "Total: " << tripletes << endl;
}
