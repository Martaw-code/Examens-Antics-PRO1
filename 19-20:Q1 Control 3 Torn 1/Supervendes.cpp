#include <iostream>
#include <vector>
using namespace std;

struct Book {
    string title;       // títol del llibre
    int nb_pag;         // número de pàginas del llibre
};

struct Author {
    string name;        // nom de l'autor
    Book bestseller;    // llibre supervendes
};

typedef vector<Author> Library;

Library read_data() {
    int n;
    cin >> n;
    Library l(n);
    for (int i = 0; i < n; ++i) {
        cin >> l[i].name >> l[i].bestseller.title >> l[i].bestseller.nb_pag;
    }
    return l;
}

int main() {
    Library autor = read_data();
    char c;
    int p;
    while (cin >> c >> p) {
        cout << "-- begin query" << endl;
        for (int i = 0; i < autor.size(); ++i) {
            if (c == autor[i].bestseller.title[0] and p < autor[i].bestseller.nb_pag) {
                cout << autor[i].name << endl;
            }
        }
        cout << "-- end query" << endl;
    }
}