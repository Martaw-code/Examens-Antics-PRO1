#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Pre: p, pref estàn formades per lletres minúscules
// Post: retorna true si pref és prefix de p, false en cas contrari
bool prefix(const string& p, const string& pref) {
    return (p.substr(0, pref.size()).compare(pref) == 0);
}


int main() {
    int n;
    int linia = 1;
    while (cin >> n) {
        vector<string> v(n);
        for (int i = 0; i < (int)v.size(); ++i) cin >> v[i];
        int count = 1;
        for (int i = 1; i < (int)v.size(); ++i) {
            if (prefix(v[0], v[i])) {
                ++count;
            }
        }
        cout << "Linea " << linia << ": " << count << " - " << v[0] << endl;
        ++linia;
    }
}