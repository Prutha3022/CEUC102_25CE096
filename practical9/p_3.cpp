#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    set<int> s;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        s.insert(x);
    }

    cout << "Unique elements (sorted): ";
    for (set<int>::iterator it = s.begin(); it != s.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    vector<int> v;

    for (set<int>::iterator it = s.begin(); it != s.end(); ++it) {
        v.push_back(*it);
    }

    cout << "Converted to vector: ";
    for (vector<int>::iterator it = v.begin(); it != v.end(); ++it) {
        cout << *it << " ";
    }

    return 0;
}
