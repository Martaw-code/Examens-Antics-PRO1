#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    char c1, c2;
    cin >> n >> c1 >> c2;
    vector<char> v(n);
    int count = 0;
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        if (v[i] >= c1 and v[i] <= c2) ++count;
    }
    cout << count << endl;
}