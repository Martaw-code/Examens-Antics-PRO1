#include <iostream>
using namespace std;

int main() {
    char c1, c2, c3;
    cin >> c1 >> c2 >> c3;
    
    if (c1 == '-') {
        if ((c2 == '-' and c3 == '/') or (c2 == '/' and c3 == '/')) {
            cout << "right" <<endl;
        }
        else cout << "wrong" <<endl;
    }
    //si tots són pujada
    else if (c1 =='/' and c2 == '/' and c3 == '/') cout << "right" <<endl;
    //altrament no és pujada
    else cout << "wrong" <<endl;
}
