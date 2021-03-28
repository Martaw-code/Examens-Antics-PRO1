#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int total = 0;
    for (int i = 0; i < n; ++i) {
        int triplet_loc = 0;
        int x;
        cin >> x;
        int x1, x2;
        cin >> x1 >> x2;
        for (int j = 2; j < x; ++j) {
            int x3;
            cin >> x3;
            if (x2 == x1 + x3) {
                ++triplet_loc, ++total;
            }
            x1 = x2, x2 = x3;
        }
        cout << triplet_loc;
        cout << endl;
    }
    cout << "Total: " << total << endl;
}