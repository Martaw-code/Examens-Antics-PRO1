#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int seq;
    bool exist = false;
    int index = 0, pos = -1, num = -1;
    while (cin >> seq and seq != -1 and !exist) {
        if ((seq + n)% 10 == 0) {
            exist = true;
            pos = index;
            num = seq;
        }
        ++index;
    }
    if (!exist) cout << "No existe" << endl;
    else cout << num << ": " << index << endl;
}