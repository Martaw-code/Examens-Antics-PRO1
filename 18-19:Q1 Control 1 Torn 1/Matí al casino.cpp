#include <iostream>
using namespace std;

int main() {
    int x, y, z, suma = 0;
    
    while (cin >> x >> y >> z) {
        if (x == y and y == z) {
            if (x%2 == 0) suma += 10;
            else if (x%3 == 0) suma += 15;
            else suma += 5;
        }
    }
    cout << suma << endl;
}
