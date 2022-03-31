#include <iostream>
#include <vector>

using namespace std;

int last_position_of(const vector<int>& v, double x) {
    bool found = false;
    int pos = -1;
    for (int i = (int)v.size()-1; i >= 0 and !found; --i) {
        if (v[i] < x) {
            pos = i;
            found = true;
        }
    }
    return pos;
}