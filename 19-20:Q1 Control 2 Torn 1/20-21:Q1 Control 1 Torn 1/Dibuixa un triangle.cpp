#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            if ((j == i) or (i == 1) or (j == n)) cout << "*";
            else cout << ' ';
        }
        cout << endl;
    }
}