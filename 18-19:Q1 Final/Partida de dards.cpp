#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Info {
    string name;
    int targets;
    int aproxs;
    int fails;
    int points;
};

bool comp(Info& a, Info& b) {
    if (a.points == b.points) {
        if (a.fails == b.fails) return a.name < b.name;
        return a.fails < b.fails;
    }
    return a.points > b.points;
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<Info> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i].name >> v[i].targets >> v[i].aproxs;
        v[i].points = 3*v[i].targets + v[i].aproxs;
        v[i].fails = k - v[i].targets - v[i].aproxs;
    }
    sort(v.begin(),v.end(),comp);
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i].name << ' ' << v[i].points << ' ' << v[i].fails << endl;
    }
}
