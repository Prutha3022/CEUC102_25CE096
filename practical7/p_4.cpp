#include <iostream>
using namespace std;

class Shape {
public:
    virtual double area() = 0;
    virtual ~Shape() {}
};

class Rectangle : public Shape {
    double length, width;
public:
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }
    double area() {
        return length * width;
    }
};

class Circle : public Shape {
    double radius;
public:
    Circle(double r) {
        radius = r;
    }
    double area() {
        return 3.14159 * radius * radius;
    }
};

int main() {
    int n;
    cin >> n;

    Shape** dynamicShapes = new Shape*[n];

    for (int i = 0; i < n; i++) {
        int type;
        cin >> type;

        if (type == 1) {
            double l, w;
            cin >> l >> w;
            dynamicShapes[i] = new Rectangle(l, w);
        } else {
            double r;
            cin >> r;
            dynamicShapes[i] = new Circle(r);
        }
    }

    cout << "Dynamic Storage Areas:" << endl;
    for (int i = 0; i < n; i++) {
        cout << dynamicShapes[i]->area() << endl;
    }

    for (int i = 0; i < n; i++) {
        delete dynamicShapes[i];
    }
    delete[] dynamicShapes;

    Shape* staticShapes[4];

    staticShapes[0] = new Rectangle(5, 3);
    staticShapes[1] = new Circle(2.5);
    staticShapes[2] = new Rectangle(4, 6);
    staticShapes[3] = new Circle(3);

    cout << "Static Storage Areas:" << endl;
    for (int i = 0; i < 4; i++) {
        cout << staticShapes[i]->area() << endl;
    }

    for (int i = 0; i < 4; i++) {
        delete staticShapes[i];
    }

    return 0;
}
