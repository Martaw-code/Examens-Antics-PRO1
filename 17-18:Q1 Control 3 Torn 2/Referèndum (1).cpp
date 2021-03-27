#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Result {
    string city;
    string district;
    int voters;
    int yes;
    int no;
    int blank;
    int null;
};

void read_data(vector<Result>& v) {
    Result r;
    while (cin >> r.city >> r.district >> r.voters >>
                  r.yes >> r.no >> r.blank >> r.null) {
        v.push_back(r);
    }
}

bool compara(const Result &a, const Result &b) {
   return a.district < b.district;
}

void compute_and_print(vector<Result>& v) {
    for (int i = 0; i < v.size(); ++i) {
        int nombre_vots = 0, si = 0, no = 0, nuls = 0, blanc = 0, abs = 0, dret_vot = 0;
        for (int j = 0; j < v.size(); ++j) {
            int total_vots= v[j].yes + v[j].no + v[j].null + v[j].blank;
            if (v[i].district == v[j].district) {
                dret_vot += v[j].voters;
                nombre_vots += total_vots;
                si += v[j].yes;
                no += v[j].no;
                nuls += v[j].null;
                blanc += v[j].blank;
                abs = dret_vot - nombre_vots;
            }
        }
        if (v[i].district != v[i+1].district) {
            cout << v[i].district << ' ' << dret_vot << ' ' << nombre_vots << ' ' << abs << ' ' << si << ' ' << no << ' ' << blanc << ' ' << nuls << endl;
        }
    }
}

int main() {
    vector<Result> v;
    read_data(v);
    sort(v.begin(), v.end(), compara);
    compute_and_print(v);
}
