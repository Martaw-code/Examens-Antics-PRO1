#include <iostream>
#include <vector>
using namespace std;

struct Game {
    string home;           // home team
    int shome;             // home team's score
    string visitor;        // visitor team
    int svisitor;        // visitor team's score
};

int scoring_ability(const vector<Game>& v, const string& team) {
    int casa = 0, fora = 0;
    for (int i = 0; i < v.size(); ++i) {
        if (team == v[i].home) casa += v[i].shome;
        if (team == v[i].visitor) fora += v[i].svisitor;
    }
    return (casa-fora);
}

// Pre: n is a natural; the input has available the information of n games
// Post: returns a vector with n correctly initialized games
vector<Game> read_games(int n) {
    vector<Game> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i].home >> v[i].shome >> v[i].visitor >> v[i].svisitor;
    }
    return v;
}

int main() {
    int n;
    cin >> n;
    vector<Game> partits = read_games(n);
    string s;
    while (cin >> s) {
        cout << s << ' ' << scoring_ability(partits, s) << endl;
    }
}
