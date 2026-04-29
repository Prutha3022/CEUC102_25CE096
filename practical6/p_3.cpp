#include <iostream>
using namespace std;

class Fuel {
protected:
    string fuelType;
public:
    Fuel() {
        fuelType = "";
    }
    Fuel(string f) {
        fuelType = f;
    }
};

class Brand {
protected:
    string brandName;
public:
    Brand() {
        brandName = "";
    }
    Brand(string b) {
        brandName = b;
    }
};

class Car : public Fuel, public Brand {
public:
    Car() : Fuel(), Brand() {}

    Car(string f, string b) : Fuel(f), Brand(b) {}

    void display() {
        cout << "Brand: " << brandName << endl;
        cout << "Fuel Type: " << fuelType << endl;
        cout << "----------------------" << endl;
    }
};

int main() {
    int n;
    cin >> n;

    Car* dynamicCars = new Car[n];

    for (int i = 0; i < n; i++) {
        string fuel, brand;
        cin >> fuel >> brand;
        dynamicCars[i] = Car(fuel, brand);
    }

    for (int i = 0; i < n; i++) {
        dynamicCars[i].display();
    }

    delete[] dynamicCars;

    Car staticCars[3] = {
        Car("Petrol", "Honda"),
        Car("Diesel", "Hyundai"),
        Car("Electric", "Tesla")
    };

    for (int i = 0; i < 3; i++) {
        staticCars[i].display();
    }

    return 0;
}
