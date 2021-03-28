#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

//OBSERVACIÓ:WA al privat

// read the elements and write them in a vector
vector<string> read_vector(int n) {
    vector<string> v(n);
    for (int i = 0; i < n; ++i) cin >> v[i];
    return v;
}

// print the elements of a vector leaving a space between them
void print_vector(const vector<string>& v) {
    int size = v.size();
    if (size > 0) {
        for (int i = 0; i < size - 1; ++i) cout << v[i] << ' ';
        cout << v[size -1];
    }
    cout << endl;
}

// Search element in a vector sorted in ascending order.
// The function returns the index where the element is located,
// or -1 if the element is not found.
int search_element(string x, const vector<string>& v, int esq, int dre) {
    if (esq > dre) return -1; //empty interval, out of range cannot exist number
    while(esq <= dre) {
        int m = esq + floor((dre - esq) / 2); //posicio mig
        if (v[m] == x) return m;
        if (x < v[m]) dre = m - 1;
        if (x > v[m]) esq = m + 1;
    }
    return -1;
}

// Insert an element (only if it is not already in the vector).
// pre: vector is sorted in ascending order.
// post: vector is sorted in ascending order and contains x.
void element_insertion(vector<string>& v, string x) {
    for (int i = 0; i < (int)v.size(); ++i) {
        if (search_element(x,v,0,(int)v.size()-1) == -1) {
            v.push_back(x);
            sort(v.begin(),v.end());
            return ;
        }
    }
}

// Delete an element (only if it is present in the vector)
// pre: vector is sorted in ascending order.
// post: vector is sorted in ascending order and does not contain x.
void element_deletion(vector<string>& v, string x) {;
    int it = search_element(x, v, 0, (int)v.size()-1);
    if (it != -1) { //the element is the vector
        for (int j = it; j < (int)v.size() - 1; ++j) {
            v[j] = v[j+1];
        }
        v.pop_back();
    }
}

// read the number of operations and treat them
void read_treat_operation(vector<string>& v) {
    int num_ops;
    cin >>num_ops;
    for (int i = 0; i < num_ops; ++i) {
        string op, elem;
        cin >> op >> elem;
        if (op == "INS") element_insertion(v, elem);
        else if (op == "DEL") element_deletion(v, elem);
    }
}

int main() {
    int n;
    while (cin >> n) {
        vector<string> v = read_vector(n);
        read_treat_operation(v);
        print_vector(v);
    }
}
