#include <iostream>
#include <vector>
using namespace std;

bool find_element(const vector<double>& v, double x, double &e) {
    double gran = 2*x, petit = x/2.0;
    bool trobat = false;
    for (int i = v.size()-1; i >= 0 and not trobat; --i) {
        if (v[i] <= petit or v[i] >= gran) {
            trobat = true;
            e = v[i];
        }
    }
    return trobat;
}

int main() {
    cout.setf(ios::fixed);
    cout.precision(2);
    int n;
    cin >> n;
    vector<double> v(n);
    double mean = 0;
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        mean += v[i];
    }
    mean /= n;
    double elem;
    bool found = find_element(v,mean,elem);
    if (found) cout << elem << endl;
    else cout << "not found" << endl;
}
