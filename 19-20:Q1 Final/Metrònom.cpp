#include <iostream>
using namespace std;

int time_lapse(int time_1, int time_2) {
    if(time_2 > time_1) return time_2 - time_1;
    else return 60 + time_2 - time_1;
}

int main() {
    int time0, time1;
    cin >> time0 >> time1;
    int lapse = time_lapse(time0, time1);
    while (time1 != -1 and time_lapse(time0, time1) == lapse) {
        time0 = time1;
        cin >> time1;
    }
    if (time1 == -1) cout << lapse << endl;
    else cout << 0 << endl;
}