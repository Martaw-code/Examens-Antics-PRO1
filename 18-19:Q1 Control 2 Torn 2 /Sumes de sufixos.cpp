#include <iostream>
#include <vector>
using namespace std;

bool find_element(const vector<int>& v, int &e) {
    int suma = 0, i = v.size() -1;
    while (i >= 0 and v[i] != suma) suma += v[i], --i;
    if (i >= 0) e = v[i];
    return (i >= 0);
}

int main() {
    int n;
    cin >> n;
    vector<int> seq(n);
    for ( int i = 0; i < n; ++i) cin >> seq[i];
    int elem;
    bool found = find_element(seq, elem);
    if (found) cout << elem << endl;
    else cout << "not found" << endl;
}
