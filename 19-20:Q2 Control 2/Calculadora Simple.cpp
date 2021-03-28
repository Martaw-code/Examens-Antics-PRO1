#include <iostream>
using namespace std;

int main() {
    char c;
    int a, b;
    while (cin >> a >> c >> b and (a != -1 and b != -1)) {
        if (c == '+') cout << a+b << endl;
        if (c == '-') cout << a-b << endl;
        if (c == '*') cout << a*b << endl;
    }
}
 
