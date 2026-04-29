#include <iostream>
using namespace std;

class Shape {
protected:
    double radius;
public:
    void setRadius(double r) {
        radius = r;
    }
    double getRadius() {
        return radius;
    }
};

class Circle : public Shape {
public:
    double getArea() {
        return 3.14159 * radius * radius;
    }
};

int main() {
    int n;
    cin >> n;

    Circle* dynamicCircles = new Circle[n];

    for (int i = 0; i < n; i++) {
        double r;
        cin >> r;
        dynamicCircles[i].setRadius(r);
    }

    for (int i = 0; i < n; i++) {
        cout << "Circle " << i + 1 << " Area: " << dynamicCircles[i].getArea() << endl;
    }

    delete[] dynamicCircles;

    int m = 5;
    Circle staticCircles[5];

    for (int i = 0; i < m; i++) {
        double r;
        cin >> r;
        staticCircles[i].setRadius(r);
    }

    for (int i = 0; i < m; i++) {
        cout << "Circle " << i + 1 << " Area: " << staticCircles[i].getArea() << endl;
    }

    return 0;
}
