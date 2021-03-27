#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int NCHAR = 5;

// returns first NCHAR chars of w (assuming that w.size() >= NCHAR)
string SelectFirstChars(const string& w) {
  string s = "";
  for (int j=0; j<NCHAR; ++j)
     s.push_back(w[j]);
  return s;
}

// IF YOU WRITE NEW FUNCTIONS/PROCEDURES, ADD THEM HERE

// returns last NCHAR chars of w (assuming that w.size() >= NCHAR)
string SelectLastChars(const string& w) {
    string s= "";
    for (int i = w.length() - NCHAR; i < w.length(); ++i) {
        s.push_back(w[i]);
        
    }
    return s;
}

bool SatisfiesProperty(const vector<string>& words) {
    int i = 0;
    bool fi = false;
    while (not fi and i < words.size()) {
        int j = 0;
        bool trobat = false;
        string first = SelectLastChars(words[i]);
        while (not trobat and j < words.size()) {
            string last = SelectFirstChars(words[j]);
            if (first == last) trobat = true;
            ++j;
        }
        fi = not trobat;
        ++i;
    }
    if (fi) return false;
    else return true;
}

int main() {
  vector<string> words(0);
  string s;
  while (cin >> s) words.push_back(s);

  if (SatisfiesProperty (words)) cout << "yes" << endl;
  else cout << "no" << endl;
}
