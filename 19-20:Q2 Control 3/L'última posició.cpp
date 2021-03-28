#include <iostream>
#include <vector>
using namespace std;

int effi_last_pos(const vector<int>& v, int z) {
    int iz = 0, de = (int)v.size()-1;
    while (iz+1 != de) {
        int m = (iz + de)/2;
        if (v[m] <= z) iz = m;
        else de = m;
    }
    return iz;
}

//gets vector v from input chanel
void read_vector(vector<int>& v) {
    int n = v.size();
    for (int i = 0; i < n; ++i) cin >> v[i];
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    read_vector(v);
    int z;
    while (cin >> z) cout << effi_last_pos(v, z) << endl;
}
