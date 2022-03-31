#include <iostream>
#include <vector>

using namespace std;

int main() {
    int h, m, d;
    cin >> h >> m >> d;
    int Tsegons = h*3600+m*60+d*60;
    int hNova = (Tsegons/3600)%24;
    int mNous = (Tsegons/60)%60;

    cout << hNova/10 << hNova%10 << ':' << mNous/10 << mNous%10 << endl;
}