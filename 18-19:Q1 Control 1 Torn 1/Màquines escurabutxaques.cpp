#include <iostream>
using namespace std;

int main() {
    int x, y, z;
    cin >> x >> y >> z;

    if (x == y and y == z) {
        if (x%2 == 0) cout << "Apples" << endl;
        else if (x%3 == 0) cout << "Bananas" << endl;
        else cout << "Joker" << endl;
    } else cout << "Loss" << endl;
}
