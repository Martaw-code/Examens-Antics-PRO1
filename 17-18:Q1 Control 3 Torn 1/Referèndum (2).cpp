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

double participation(const Result &a) {
    return 100.0*(a.yes + a.no+a. blank +a. null)/a. voters;
}

void districte_max(const Result &r) {
    int vots = r.yes + r.no + r.blank + r.null;
    int abs = r.voters - vots;
    double part = participation(r);
    cout << r.district << ' ' << r.city << ' ' << part << ' ' << r.voters << ' ' << vots << ' ' << abs << ' ' << r. yes << ' ' << r.no << ' ' << r. blank << ' ' << r. null << endl ;
}

void compute_and_print(const vector < Result >& v) {
    if (v.size() == 0) return ;
    Result ciutatmax ;
    ciutatmax = v[0];
    for ( int i = 1; i < v.size(); ++i) {
        if (v[i]. district ==v[i-1].district) {
            if (participation(v[i]) > participation(ciutatmax)) ciutatmax = v[i];
        }
        else {
            districte_max(ciutatmax), ciutatmax = v[i];
            }
        }
    districte_max(ciutatmax);
}

bool compara(const Result &a, const Result &b) {
   return a.district < b.district;
}

int main() {
    vector<Result> v;
    read_data(v);
    sort(v.begin(), v.end(), compara);
    compute_and_print(v);
}
