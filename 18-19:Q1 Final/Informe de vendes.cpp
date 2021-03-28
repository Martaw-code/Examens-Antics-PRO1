#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Info{
    string code;
    int gross_income;
};

bool comparar(Info& a, Info& b) {
    if (a.gross_income == b.gross_income) {
        return a.code < b.code;
    }
    return a.gross_income > b.gross_income;
}

int main() {
    int n;
    while (cin >> n) {
        vector<Info> v(n);
        for (int i = 0; i < n; ++i) {
            int unitats, preu;
            cin >> v[i].code >> unitats >> preu;
            v[i].gross_income = unitats*preu;
        }
        sort(v.begin(),v.end(),comparar);
        for (int i = 0; i < v.size(); ++i) {
            cout << v[i].code << ' ' << v[i].gross_income << endl;
        }
        cout << endl;
    }
}
