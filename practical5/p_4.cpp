#include <iostream>
#include <iomanip>
using namespace std;

ostream& currency(ostream& output) {
    output << "₹";
    return output;
}

int main() {
    string names[] = {"Aman", "Riya", "Kunal", "Sneha"};
    int marks[] = {85, 92, 78, 88};
    double fees[] = {25000.5, 30000.75, 22000.0, 27000.25};

    int n = 4;

    cout << setfill('=') << setw(50) << "" << endl;
    cout << setfill(' ') << left << setw(15) << "Name"
         << setw(10) << "Marks"
         << setw(15) << "Fees" << endl;
    cout << setfill('=') << setw(50) << "" << endl;

    for (int i = 0; i < n; i++) {
        cout << setfill(' ') << left << setw(15) << names[i]
             << setw(10) << marks[i]
             << currency << fixed << setprecision(2) << setw(15) << fees[i]
             << endl;
    }

    cout << setfill('=') << setw(50) << "" << endl;

    return 0;
}
