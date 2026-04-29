#include <iostream>
using namespace std;

int main() {
    int a, b;

    try {
        cout << "Enter numerator: ";
        if (!(cin >> a)) throw "Invalid input";

        cout << "Enter denominator: ";
        if (!(cin >> b)) throw "Invalid input";

        if (b == 0) throw "Division by zero";

        cout << "Result: " << (double)a / b << endl;
    }
    catch (const char* msg) {
        cout << "Error: " << msg << endl;
    }

    return 0;
}
