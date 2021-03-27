#include <iostream>
#include <vector>
using namespace std;

void LlegirParaules(vector<string>& cas, string& paraula) {
   while (paraula != "FI") {
      cas.push_back(paraula);
      cin >> paraula;
   }
}

int es_consonant(string p) {
    int consonants = 0;
    for (int i = 0; i < (int)p.length(); ++i) {
        if (!(p[i] == 'A' or p[i] == 'E' or p[i] == 'I' or p[i] == 'O' or p[i] == 'U')){
            ++consonants;
        }
    }
    return consonants;
}

int main() {
    string p;
    while (cin >> p) {
        vector<string> paraules;
        LlegirParaules(paraules, p);
        if (paraules.size() < 2) cout << '-' << endl;
        else {
            int consonants = es_consonant(paraules[(int)paraules.size()-1]);
            bool trobat = false;
            for (int i = (int)paraules.size()-2; i >= 0 and !trobat; --i) {
                if (es_consonant(paraules[i]) == consonants) {
                    trobat = true;
                    cout << paraules[i] << ", " << i << endl;
                }
            }
            if (!trobat) cout << '-' << endl;
        }
    }
}
