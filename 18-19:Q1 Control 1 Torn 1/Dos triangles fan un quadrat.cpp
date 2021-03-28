#include <iostream>
using namespace std;

int main () {
    int n;
    char c1, c2;

    while (cin >> n >> c1 >> c2) {
        for (int i = 0; i < n ; ++ i) {
            for (int j = 0; j < n ; ++ j) {
                if (i > j) cout << c1;
                else cout << c2;
            }
            cout << endl;
        }
    cout << endl;
    }
}
