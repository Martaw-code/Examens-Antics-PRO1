#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    char c = ':';
    int h, m, s;
    //A la variable segons_total guaradrem la suma de totes les
    //(hores minuts i segons) passades a segons de cada etapa
    int segons_totals = 0;
    //Iterem sobre les n etapes de la volta per sumar el temps
    //de cada etapa
    for (int i = 0; i < n; ++i) {
        cin >> h >> c >> m >> c >> s;
        segons_totals += h*3600 + m*60 + s;
    }
    //Convertim els segons en h, m i segons i sabrem el temps emprat
    //per completar la volta ciclista
    int h_final = (segons_totals/3600);
    int m_final = (segons_totals%3600)/60;
    int s_final = (segons_totals%3600)%60;
    cout << h_final << "H " << m_final << "M " <<s_final << "S" << endl;
}
 
