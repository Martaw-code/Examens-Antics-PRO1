#include <iostream>
using namespace std;

int main() {
    int n;
    char c;
    cin >> n >> c;

    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j < i; ++j) {
            for (int k = 0; k < i; ++k) {
                if (j == 0 or j == i-1 or k == 0 or k == i-1) cout << c;
                else cout << ' ';
            }
            cout << endl;
        }
        cout << endl;
    }
}
