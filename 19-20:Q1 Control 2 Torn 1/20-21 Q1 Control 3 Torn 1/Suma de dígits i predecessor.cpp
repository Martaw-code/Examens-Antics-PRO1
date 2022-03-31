#include <iostream>
#include <vector>

using namespace std;

int sumaDigits(int n) {
    int suma = 0;
    while (n > 0) {
        suma += n%10;
        n /= 10;
    }
    return suma;
}

bool esDivisor(int n, int m) {
    if (m%n == 0) return true;
    return false;
}

int main() {
    vector<int> v;
    int n;
    while (cin >> n) v.push_back(n);
    int count = 0;
    for (int i = 1; i < (int)v.size(); ++i) {
        if (esDivisor(sumaDigits(v[i]),v[i-1])) {
            ++count;
        }
    }
    cout << count << endl;
}