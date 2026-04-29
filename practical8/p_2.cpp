#include <iostream>
#include <cmath>
using namespace std;

class NegativeNumberException {
public:
    void message() {
        cout << "Error: Negative number entered" << endl;
    }
};

int main() {
    double num;

    while (true) {
        cout << "Enter a number: ";
        cin >> num;

        try {
            if (num < 0) {
                throw NegativeNumberException();
            }

            cout << "Square root: " << sqrt(num) << endl;
        }
        catch (NegativeNumberException e) {
            e.message();
        }
    }

    return 0;
}
