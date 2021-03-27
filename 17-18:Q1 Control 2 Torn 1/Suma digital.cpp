#include <iostream>
using namespace std;

//pre: a >= 0, b >= 0
//post: returns the digital sum of a and b
int digital_sum(int a, int b) {
    if (a == 0) return b;
    if (b == 0) return a;
    //(ak+bk)%10 ---> nomes prenem el residu al fer %10
    else return digital_sum(a/10, b/10)* 10 + (a%10+ b%10)%10;
}
int main() {
    int x, y;
    while (cin >> x >> y) {
        cout << digital_sum(x, y) << endl;
    }
}
