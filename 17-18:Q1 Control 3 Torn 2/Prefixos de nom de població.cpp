#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int PREFIX_LEN = 3;

// The function reads in a vector a sequence
// of prefixes till the word "FI"
vector<string> load_prefixes(){
   vector<string> pref;
   string s;
   cin >> s;
   while (s != "FI") {
      pref.push_back(s);
      cin >> s;
   }
   return pref;
}

// This function reads n words and returns a vector with the prefix of each word
vector<string> read_words(int n){
   vector<string> wpref(n);
    string s;
    for (int i = 0; i < n; ++i){
       cin >> s;
       wpref[i] = "";
       for (int k = 0; k < PREFIX_LEN;++k)
          wpref[i].push_back(s[k]);
    }
    return wpref;
}

double maximes_aparicions(const vector<string>& prefixos, vector<string>& paraules_pre) {
    sort(paraules_pre.begin(), paraules_pre.end());
    vector<int> comptador(prefixos.size(),0);
    int i = 0, j = 0;
    while (i < prefixos.size() and j < paraules_pre.size()) {
        if (prefixos[i] == paraules_pre[j])  {
            ++comptador[i];
            ++j;
        }
        else if (prefixos[i] < paraules_pre[j]) ++i;
        else if (prefixos[i] > paraules_pre[j]) ++j;
    }
    int m = 0;
    for (int k = 0; k < comptador.size(); ++k) {
        if (comptador[k] > m) m = comptador[k];
    }
    return m;
}

int main() {
   vector<string> prefixes = load_prefixes();
    sort(prefixes.begin(), prefixes.end());
    int n;
    while (cin >> n) {
        vector<string> paraules_pre = read_words(n);
        cout << maximes_aparicions(prefixes, paraules_pre) << endl;
    }
}
