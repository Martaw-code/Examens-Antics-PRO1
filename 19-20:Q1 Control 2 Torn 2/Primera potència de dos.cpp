#include <iostream>
using namespace std;

bool is_power_2(int n) {
    if (n == 0) return false;
    while (n!= 1 and n % 2 == 0) n = n/2;
    return n == 1;
}

int main() {
    int n;
    int position = 1;
    cin >> n;
    while (n != -1 and not is_power_2(n)) {
        cin >> n;
        ++position;
    }
    if (n != -1) cout << position;
    else cout << 0;
    cout << endl;
}
