#include <iostream>
using namespace std;

int main() {
    //LLegim els 4 valors i declarem vars increase i folded
    //que conten la qunatitat de seq que són dels tipus respectivament.
    int x1, x2, x3, x4, increase = 0, folded = 0;
    while (cin >> x1 >> x2 >> x3 >> x4) {
        //si es increasing
        if (x1 < x2 and x2 < x3 and x3 < x4) ++increase;
        //si és folded
        if (x1 == x3 and x2 == x4) ++folded;
    }
    cout << "Increasing: " << increase << endl;
    cout << "Folded: " << folded << endl;
}
