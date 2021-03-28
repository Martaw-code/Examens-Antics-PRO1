#include <iostream>
#include <vector>
using namespace std;

void zeros_counter(const vector<int>& u, vector<int>& v) {
    int n = u.size();
    v = vector<int> (n);
    int counter = 0;
    for (int j = n-1; j >= 0; --j) {
        if (u[j] == 0) ++counter;
        v[j] = counter;
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> u(n);
    for (int i = 0; i < n; ++i) cin >> u[i];
    vector<int> v(n);
    zeros_counter(u, v);
    for (int i = 0; i < n; ++i) cout << v[i] << endl;
}