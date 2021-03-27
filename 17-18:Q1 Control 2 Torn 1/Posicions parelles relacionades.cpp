#include <iostream>
using namespace std;

int main() {
    int x1, x2;
    cin >> x1 >> x2;
    int i = 2, count = 1, x3, c = x2;
    while (cin >> x3) {
        ++i;
        if (i%2 == 0) {
            if (x3 == c)
                ++count;
        }
        x2 = x3;
    }
    cout << count << endl;
}
