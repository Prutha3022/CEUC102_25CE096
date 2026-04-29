#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    vector<int> v1 = v;
    reverse(v1.begin(), v1.end());

    cout << "Using std::reverse(): ";
    for (vector<int>::iterator it = v1.begin(); it != v1.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    vector<int> v2 = v;

    vector<int>::iterator start = v2.begin();
    vector<int>::iterator end = v2.end() - 1;

    while (start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;
        ++start;
        --end;
    }

    cout << "Manual reversal: ";
    for (vector<int>::iterator it = v2.begin(); it != v2.end(); ++it) {
        cout << *it << " ";
    }

    return 0;
}
