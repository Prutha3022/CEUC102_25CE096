#include <iostream>
using namespace std;

class Fahrenheit;

class Celsius {
    double temp;
public:
    Celsius() {
        temp = 0;
    }

    Celsius(double t) {
        temp = t;
    }

    double getTemp() {
        return temp;
    }

    operator Fahrenheit();

    bool operator==(Celsius c) {
        return temp == c.temp;
    }
};

class Fahrenheit {
    double temp;
public:
    Fahrenheit() {
        temp = 0;
    }

    Fahrenheit(double t) {
        temp = t;
    }

    double getTemp() {
        return temp;
    }

    operator Celsius() {
        return Celsius((temp - 32) * 5 / 9);
    }

    bool operator==(Fahrenheit f) {
        return temp == f.temp;
    }
};

Celsius::operator Fahrenheit() {
    return Fahrenheit((temp * 9 / 5) + 32);
}

int main() {
    Celsius c1(25);
    Fahrenheit f1;

    f1 = c1;
    cout << "Celsius to Fahrenheit: " << f1.getTemp() << endl;

    Celsius c2;
    c2 = f1;
    cout << "Fahrenheit to Celsius: " << c2.getTemp() << endl;

    if (c1 == c2) {
        cout << "Temperatures are equal" << endl;
    } else {
        cout << "Temperatures are not equal" << endl;
    }

    int n;
    cin >> n;

    Celsius* queue = new Celsius[n];
    int front = 0, rear = 0;

    for (int i = 0; i < n; i++) {
        double t;
        cin >> t;
        queue[rear++] = Celsius(t);
    }

    cout << "Queue Processing:" << endl;
    while (front < rear) {
        Fahrenheit f = queue[front++];
        cout << f.getTemp() << " ";
    }
    cout << endl;

    delete[] queue;

    Celsius arr[5];
    for (int i = 0; i < 5; i++) {
        double t;
        cin >> t;
        arr[i] = Celsius(t);
    }

    cout << "Static Array Conversion:" << endl;
    for (int i = 0; i < 5; i++) {
        Fahrenheit f = arr[i];
        cout << f.getTemp() << " ";
    }

    return 0;
}
