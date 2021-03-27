#include <iostream>
using namespace std;

 //Input: c is an upper- or lowercase letter
 //Output: returns the uppercase Atbash encipherment of c
char atbash(char c) {
    //auxiliar on fem la conversió
    char atx;
    //passem de minuscula a majuscula
    if (c >= 'a' and c <= 'z') c = char(c + 'A' - 'a');
    if (c >= 'A' and c <= 'Z') atx = 26 - (c-64) + 65;
    else atx = 0;
    return atx;
}

int main() {
    //Llegim las seq de lletres entre A i z, mentre estigui continguda aqui,
    //podem encryptar el missatge
    char c;
    while (c != '#') {
        cin >> c;
        if ((c >= 'A' and c <= 'Z') or (c >= 'a' and c <= 'z')) {
            //cridem a la funció
            cout << atbash(c);
        }
    }
    cout << '#' <<  endl;
}
