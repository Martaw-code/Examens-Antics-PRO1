#include <iostream>
using namespace std;

int main(){
    int x,y;
    int suma = 0;
    int suma1 = 0;
    cin >> x >> y;
    for (int i = 0; i < x; ++i){
        for (int j = 0; j < y; ++j){
            char c;
            cin >> c;
            suma += c - '0';
            if (i % 2 == 0){
                suma1 += c -'0';
            }
        }
    }
    cout << suma << " " <<suma1 <<endl;
}
