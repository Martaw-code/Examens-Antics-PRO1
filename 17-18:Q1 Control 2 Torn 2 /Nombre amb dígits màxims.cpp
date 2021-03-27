#include <iostream>
using namespace std;

//pre: a >= 0, b >= 0 amb el mateix nÃºmero de xifres
//post: torna el num_max_digits de a i b
int max(int a, int b) {
    if (a > b) return a;
    return b;
}
int num_max_digits(int a, int b) {
    if (a < 10 and b < 10) return (max(a,b));
    else return num_max_digits(a/10, b/10)*10 + max(a%10,b%10);
}

    
int main() {
    int x, y;
    while (cin >> x >> y) {
        cout << num_max_digits(x, y) << endl;
    }
}
/*
    15 47
    1st:
        1 4 -- max = 4*10 = 40 + 7
    123 124
    1st: 12 12
    2nd: 1 1
    3rd: 1
    4rt: 10 + 2 = 12
    5th: 4
    6TH: 124
 */
