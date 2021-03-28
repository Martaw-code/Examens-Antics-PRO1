#include <iostream>
#include <vector>
using namespace std;

struct Item {
    string name;
    int quantity;
};

typedef vector<vector<Item> > Room;

// Pre: n, m integers greater than 0
// Post: it returns a valid n x m Room
Room read_room(int n, int m) {
    Room mat(n, vector<Item>(m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j){
            cin >> mat[i][j].name >> mat[i][j].quantity;
        }
    }
    return mat;
}

// Pre: room has at least one object;
//      f, c is a valid position of room.
// Post: it returns the total amount of objects in room having name s
//       and included in the submatrix having its top left corner at
//       position row f, column c, and its bottom right corner as in room
int how_many_objects(const Room& room, int f, int c, string s) {
    int quantitat = 0;
    for (int i = f; i < (int) room.size(); ++i) {
        for (int j = c; j < (int) room[0].size(); ++j) {
            if (room[i][j].name == s) {
                quantitat += room[i][j].quantity;
            }
        }
    }
    return quantitat;
}

int main() {
    int n, m;
    cin >> n >> m;
    Room room = read_room(n, m);
    int f, c;
    string s;
    while (cin >> f >> c >> s) {
        cout << s << ": " << how_many_objects(room, f, c, s) << endl;
    }
}
