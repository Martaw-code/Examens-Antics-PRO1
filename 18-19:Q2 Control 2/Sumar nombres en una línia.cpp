#include <iostream>
using namespace std;

int suma(string str) {
    string temp;
    int suma = 0;
    for (char c : str) {
        if (c == '.') {
            break;
        } else if (isdigit(c)) {
            temp +=c;
        } else {
            suma += atoi(temp.c_str());
            temp = "";
        }
    }
    return suma + atoi(temp.c_str());
}


int main() {
    string s;
    while (cin >> s) {
        int res = suma(s);
        cout << res << endl;
    }
}
 
