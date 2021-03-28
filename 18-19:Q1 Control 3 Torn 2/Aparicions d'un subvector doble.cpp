#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// DO NOT MODIFY!: THIS STRUCTURE MUST BE USED TO STORE THE
// INPUT SEQUENCES AND THE OBTAINED STARTING POSITIONS FOR
// EACH PAIR OF SEQUENCES
struct InputPos {
  int t;            // number of pair (x_t,y_t)
  vector<int> x;    // input sequence x_t
  vector<int> y;    // input sequence y_t
  vector<int> nk;   // starting positions of 2*x_t in y_t
};

// DO NOT MODIFY!: THIS FUNCTION READS A VECTOR OF n INTEGERS
vector<int> read_vector(int n) {
  vector<int> x(n);
  for (int i = 0; i < n; ++i) cin >> x[i];
  return x;
}

// DO NOT MODIFY!: THIS FUNCTION ONLY OUTPUTS THE RESULTS
// (STORED IN A VECTOR OF InputPos)
void write_results(const vector<InputPos>& vInputPos) {
  int nn = vInputPos.size();
  for (int i = 0; i < nn; ++i) {
    // Outputs the number of positions
    cout << vInputPos[i].nk.size() << ": ";
    if (vInputPos[i].nk.size() == 0) cout << "-";
    // Outputs the positions
    for (int j = 0; j < vInputPos[i].nk.size(); ++j) {
      if (j != 0) cout << " ";
      cout << vInputPos[i].nk[j];
    }
    // Outputs the input sequences
    cout << " / ";
    for (int j = 0; j < vInputPos[i].x.size(); ++j) {
      if (j != 0) cout << " ";
      cout << vInputPos[i].x[j];
    }
    cout << " / ";
    for (int j = 0; j < vInputPos[i].y.size(); ++j) {
      if (j != 0) cout << " ";
      cout << vInputPos[i].y[j];
    }
    cout << endl;
  }
}

///----------------------------------------------------------------------------------------///

// Pre: 0<=k<y.size()
// Post: The result is the first position i>=k where vector 2*x is found in y,
//       or -1 if no such position exists
int subvector_from_k (const vector<int>& x, const vector<int>& y, int k) {
    int n = x. size ();
    int m = y. size ();
    for ( int i = 0; k+i <= m-n; ++i) {
        int j = 0;
        while (j < n and 2*x[j] == y[k+i+j])
            ++j;
        if (j == n)
            return k+i;
        
    }
    return -1;
}
// Pre: x.size()>0 and y.size()>0
// Post:The result is a vector containing all the positions in y where
//        subvector 2*x occurs.
vector<int> starting_positions (const vector<int>& x, const vector<int>& y) {
    vector <int > nk (0);
    int k = subvector_from_k (x,y ,0);
    while (k >=0) {
        nk. push_back (k);
        k = subvector_from_k (x,y,k +1);
        
    }
    return nk;
}
// Comparison function to sort the output as required
bool compareInputPos (const InputPos& inp1, const InputPos& inp2) {
    if ( inp1 .nk. size () > inp2 .nk. size ())
        return true ;
    if ( inp1 .nk. size () == inp2 .nk. size () and inp1 .t < inp2 .t)
        return true ;
    return false ;
}

// DO NOT MODIFY!: MAIN PROGRAM IS ALREADY COMPLETE
int main() {
  vector<InputPos> vInputPos;
  int t = 1;
  int n;
  while (cin >> n) {
    InputPos inp;
    inp.x = read_vector(n);
    int m;
    cin >> m;
    inp.y = read_vector(m);
    inp.t = t;
    inp.nk = starting_positions(inp.x,inp.y);
    vInputPos.push_back(inp);
    ++t;
  }

  sort(vInputPos.begin(), vInputPos.end(), compareInputPos);

  write_results(vInputPos);
}
