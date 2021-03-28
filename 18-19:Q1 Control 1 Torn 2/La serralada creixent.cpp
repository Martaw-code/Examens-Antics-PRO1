#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int total = 0;
    for (int i = 0; i < n; ++i) {
        char c1, c2, c3;
        cin >> c1 >> c2 >> c3;
        
        if (c1 == '-') {
            if ((c2 == '-' and c3 == '/') or (c2 == '/' and c3 == '/')) {
                ++total;
                }
            }
        else if (c1 =='/' and c2 == '/' and c3 == '/') ++total;
        }
    cout << total << endl;
}
