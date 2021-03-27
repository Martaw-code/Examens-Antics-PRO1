#include <iostream>
using namespace std;

int main() {
    //Llegim un nombre n i un carÃ cter
    int n;
    char c;
    cin >> n >> c;
    //Fem un taulell n x n
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            //i == j per fer la diagonal prinicpal, i == n-j +1
            //per la secundaria i les meitat horitzontal del taullel
            //amb i == n/2 + 1 i la vertical (n+1)/2)
            if ((i == j) or (i == n/2 + 1) or (i == n - j + 1)
                or (j == (n+1)/2)) cout << c;
            //resta emplenem amb punts
            else cout << '.';
        }
        cout << endl;
    }
}
