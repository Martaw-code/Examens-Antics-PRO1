#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = n - 1; i >= 0; i--) {
        for (int j = n - 1; j > i; j--) {
            cout << " ";
        }
        cout << "V";
        for (int j = 1; j < (i * 2); j++)
            cout << " ";

        if (i >= 1)
            cout << "V";
        cout << endl;
    }
}
