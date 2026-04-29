#include <iostream>
using namespace std;

class Calculator {
    double results[100];
    int count;

public:
    Calculator() {
        count = 0;
    }

    int add(int a, int b) {
        int res = a + b;
        results[count++] = res;
        return res;
    }

    double add(double a, double b) {
        double res = a + b;
        results[count++] = res;
        return res;
    }

    double add(int a, double b) {
        double res = a + b;
        results[count++] = res;
        return res;
    }

    double add(double a, int b) {
        double res = a + b;
        results[count++] = res;
        return res;
    }

    void displayResults() {
        cout << "Results: ";
        for (int i = 0; i < count; i++) {
            cout << results[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Calculator calc;

    cout << calc.add(5, 10) << endl;
    cout << calc.add(3.5, 2.5) << endl;
    cout << calc.add(7, 2.8) << endl;
    cout << calc.add(4.2, 6) << endl;

    calc.displayResults();

    return 0;
}
