#include <iostream>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        int count = 0;
        string x1, x2;
        if (n > 0) cin >> x1;
        for (int i = 1; i < n; ++i) {
            cin >> x2;
            if (x1 == "donald" and x2 == "trump") ++count;
            x1 = x2;
        }
        cout << count << endl;
    }
}
