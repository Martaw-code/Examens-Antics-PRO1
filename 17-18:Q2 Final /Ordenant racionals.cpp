#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Racional {
    int num, den;
    //inv: den > 0
};

bool comp(Racional a, Racional b) {
    return a.num*b.den < a.den*b.num;
}

int main() {
    int n;
    bool primer = true;
    while (cin >> n) {
        if(not primer) cout << endl;
        primer = false;
        vector <Racional> v(n);
        for (int i = 0; i < n; ++ i) cin >> v[i].num >> v[i].den;
        sort(v.begin(), v.end(), comp);
        for (int i = 0; i < n; ++i) {
            cout << v[i].num << '/' << v[i].den << endl;
        }
    }
}
