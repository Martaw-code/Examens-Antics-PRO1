#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int DELTA_TIME = 10;  // space in minute between samples

typedef struct {
  double magnitude;   // value of the peak
  int time;           // minutes from the origin (0 min.)
} Pic;

void llegir_mesures(vector<double> & vMesures) {
  int n = vMesures.size();
  for (int i = 0; i < n; ++i) cin >> vMesures[i];
}

// write the information of the pic p
void escriure_pic(const Pic& p) {
  cout << "(" << p.magnitude << "," << p.time << ")";
}

// returns the vector of peaks (<magnitude, time>)
vector<Pic> obte_pics(const vector<double> & vMesures) {
    vector<Pic> pics;
    int t = DELTA_TIME;
    for (int i = 1; i < int(vMesures.size())-1; ++i) {
        if (vMesures[i-1] < vMesures[i] and vMesures[i] > vMesures[i+1]) {
            Pic p;
            p.magnitude = vMesures[i]; p.time = t; pics.push_back(p);
        }
    t += DELTA_TIME;
    }
    return pics;
}

// returns true iff the peak p1 is "greater" than peak p2
bool compare(const Pic& p1, const Pic& p2) {
    if (p1.magnitude == p2.magnitude) return p1.time < p2.time;
    else return p1.magnitude > p2.magnitude;
}


int main() {
  int n;
  while (cin >> n) {
    vector<double> vm(n);
    llegir_mesures(vm);
    vector<Pic> vp = obte_pics(vm);
      sort(vp.begin(), vp.end(), compare);
      int i, j;
      while (cin >> i >> j and i != 0 and j != 0) {
          if (i <= int(vp.size()) and j <= int(vp.size())) {
              escriure_pic(vp[i-1]);
              cout << '-';
              escriure_pic(vp[j-1]);
              cout << " : " << abs(vp[i-1].time - vp[j-1].time) << endl;
          }
          else cout << "x" << endl;
      }
      cout << endl;
  }
}
