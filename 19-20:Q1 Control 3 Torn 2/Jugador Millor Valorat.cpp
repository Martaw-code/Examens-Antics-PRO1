#include <iostream>
#include <vector>
using namespace std;

struct Player {
    string name;
    double score;     // mitjana anotadora
};

struct Team {
    string tname;
    Player mvp;       // jugador millor valorat
};

typedef vector<Team> League;

League read_data() {
    int n;
    cin >> n;
    League l(n);
    for (int i = 0; i < n; ++i) {
        cin >> l[i].tname >> l[i].mvp.name >> l[i].mvp.score;
    }
    return l;
}

int main() {
    League lliga = read_data();
    char c;
    double s;
    while (cin >> c >> s) {
        cout << "-- begin query" << endl;
        for (int i = 0; i < lliga.size(); ++i) {
            if (lliga[i].tname[0] == c and s < lliga[i].mvp.score) {
                cout << lliga[i].mvp.name << endl;
            }
        }
        cout << "-- end query" << endl;
    }
}