#include <iostream>
using namespace std;

int main() {
    int x;
    while (cin >> x) {
        int prev = x + 1;
        int p = 0;
        bool saw = true;
        while (x != 0 and saw) {
            if ( p== 0 and x >= prev) saw = false;
            else if (p>0 and x <=prev) saw = false;
            p = (p+1)%3;
            prev = x; cin >> x;
        }
        while (x!=0) cin >> x;
        if (saw) cout << "saw" << endl;
        else cout << "not saw" << endl;
    }
}
