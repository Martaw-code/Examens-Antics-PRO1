#include <iostream>
#include <vector>

using namespace std;

struct Swimmer {
    string name;
    string country;
    string style;
    double time;
};

typedef vector<Swimmer> Competition;

void read_data(Competition& v) {
    for (int i = 0; i < v.size(); ++i) {
        cin >> v[i].name >> v[i].country >> v[i].style >> v[i].time;
    }
}

int winner(const Competition& v, string style) {
    int pos = -1;
    for (int i = 0; i < v.size(); ++i) {
        if (style == v[i].style) {
            if (pos == -1 or (v[i].time < v[pos].time)) pos = i;
        }
    }
    return pos;
}

int main() {
    int n;
    cin >> n;
    vector<Swimmer> s(n);
    read_data(s);
    string style;
    while (cin >> style) {
        int posicio = winner(s, style);
        if (posicio != -1) cout << "Winner " << style << ": " << s[posicio].name << ' ' << s[posicio].country << " " << s[posicio].time << endl;
        else cout << "Style " << style << " has not been run" << endl;
    }
}
