#include <iostream>
using namespace std;

int main() {
    cout.setf(ios::fixed);
    cout.precision(1);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        char c;
        cin >> c;
        if (c == 'C') {
            double num;
            cin >> num;
            cout << "F " << num*1.8 + 32 << endl;
        } else {
            double num;
            cin >> num;
            cout << "C " << (num - 32)/1.8 << endl;
        }
    }
}