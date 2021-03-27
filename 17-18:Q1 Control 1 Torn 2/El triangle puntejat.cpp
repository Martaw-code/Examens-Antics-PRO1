#include <iostream>
using namespace std;

int main (){
    int n;
    char c;
    cin >> n >> c;
    //Taulell de n/2 +1 files x (2*(n-i)) -1 columnes
    for (int i = 0; i < n/2 +1 ; ++i) {
        for (int j = 0; j < (2*(n-i)) -1; ++j) {
            //Per cada fila hi hauran 2*i espais
            if (j < 2*i) cout << " ";
            else {
                //Si la columna és parella
                if (j%2 == 0) cout << c;
                //Si la columan és senar
                else cout << ".";
            }
        }
        cout << endl;
    }
}
