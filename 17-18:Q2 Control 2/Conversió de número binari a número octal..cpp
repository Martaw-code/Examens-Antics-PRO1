#include <iostream>
using namespace std;


int binary2octal(int n) {
    if (n ==0) return 0;
    else if (n == 1) return 1;
    else if (n == 10) return 2;
    else if (n == 11) return 3;
    else if (n == 100) return 4;
    else if (n == 101) return 5;
    else if (n == 110) return 6;
    else if (n == 111) return 7;
    else {
        int a = 0;
        a += binary2octal(n/1000)*10 + binary2octal(n%1000);
        return a;
    }
}

int main(){
    int n;
    while (cin >> n){
        cout  << n << " is equivalent to " << binary2octal(n);
        cout  << " in base 8" << endl;
    }
}

