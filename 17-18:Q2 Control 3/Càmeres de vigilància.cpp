#include <iostream>
#include <vector>
using namespace std;

typedef vector <vector <int> > Room;

// Pre: n, m integers greater than 0
// Post: it returns a valid n*m Room
Room read_room(int n, int m) {
    Room h(n, vector <int >(m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j){
            cin >> h[i][j];
        }
    }
    return h;
}


// Pre: room is a valid Room
// Post: it returns the value of those objects that are not monitored by any of the security cameras in room, no matter the final value of room
int non_monitored_objects(const Room& room) {
    int n = room.size();
    int m = room [0]. size ();
    int mincol = m; // columna de la camera mes a l’esquerra trobada fins al moment
    int s = 0;
    int i = 0;
    while (i<n and mincol >0) {
        int j=0;
        while (j<mincol and room[i][j]>=0) {
            s += room[i][j];
            ++j;
        }
    // trobada nova camera, mes a l’esquerra que l’anterior.
        if (j<mincol) mincol=j;
        ++i;
    }
    return s;
    
}

int main() {
    int n, m;
    while (cin >> n >> m) {
        Room room = read_room(n, m);
        cout << non_monitored_objects(room) << endl;
    }
}
