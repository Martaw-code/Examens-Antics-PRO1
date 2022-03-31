#include <iostream>

using namespace std;

int esborraZero(int n) {
    if (n < 10) return n;
    else if (n%10 == 0) return esborraZero(n/10);
    return n%10 + esborraZero(n/10)*10;
}


int main() {
    int n;
    while (cin >> n) {
        cout << esborraZero(n) << endl;
    }
}