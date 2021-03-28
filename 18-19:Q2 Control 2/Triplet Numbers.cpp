#include <iostream>
using namespace std;

//pre: 0 < n and n < 10^9
//post: returns true if n is a triplets-number and false otherwise
bool triplet_number(int n){
    if (n == 0) return true;
    if ((n%10 == (n/10)%10) and ((n/10)%10 == (n/100)%10) and (n%10 == (n/100)%10))
        return triplet_number(n/1000);
    return false;
}


int main(){
 int n;
 while (cin >> n){
     if (triplet_number(n)) cout << "TRUE" << endl;
     else cout << "FALSE" << endl;
    }
}
