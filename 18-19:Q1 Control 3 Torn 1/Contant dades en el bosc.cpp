#include <iostream>
#include <vector>

using namespace std;

struct Things {
    string name;
    string color;
    string poison;
    string burns;
    double height;
};

typedef vector<Things> Forest;

void read_data(Forest& v) {
    int n;
    cin >> n;
    while (n > 0) {
        Things r;
        cin >> r.name >> r.color >> r.poison >> r.burns >> r.height;
        v.push_back(r);
        --n;
    }
}

int count(const Forest& v, string name, string color,
          string poison, string burns, double height) {
    int coses = 0;
    for (int i = 0; i < v.size(); ++i) {
        if((v[i].name == name or name == "*") and (v[i].color == color or color == "*") and (v[i].poison == poison or poison == "*") and (v[i].burns == burns or burns == "*") and (v[i].height >= height)) ++coses;
    }
    return coses;
}

int main() {
    Forest v;
    read_data(v);
    
    string nom, color, veri, crema;
    double alcada;
    while (cin >> nom >> color >> veri >> crema >> alcada) {
        cout << count(v,nom,color,veri,crema,alcada) << endl;
    }
}
