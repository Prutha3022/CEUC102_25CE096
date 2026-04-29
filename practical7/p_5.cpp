#include <iostream>
using namespace std;

class Grading {
protected:
    double marks;
public:
    Grading(double m) {
        marks = m;
    }
    virtual char computeGrade() = 0;
    virtual ~Grading() {}
};

class Undergraduate : public Grading {
public:
    Undergraduate(double m) : Grading(m) {}

    char computeGrade() {
        if (marks >= 85) return 'A';
        else if (marks >= 70) return 'B';
        else if (marks >= 55) return 'C';
        else if (marks >= 40) return 'D';
        else return 'F';
    }
};

class Postgraduate : public Grading {
public:
    Postgraduate(double m) : Grading(m) {}

    char computeGrade() {
        if (marks >= 90) return 'A';
        else if (marks >= 75) return 'B';
        else if (marks >= 60) return 'C';
        else if (marks >= 50) return 'D';
        else return 'F';
    }
};

int main() {
    int n;
    cin >> n;

    Grading** students = new Grading*[n];

    for (int i = 0; i < n; i++) {
        int type;
        double m;
        cin >> type >> m;

        if (type == 1)
            students[i] = new Undergraduate(m);
        else
            students[i] = new Postgraduate(m);
    }

    cout << "Grades:" << endl;
    for (int i = 0; i < n; i++) {
        cout << students[i]->computeGrade() << endl;
    }

    for (int i = 0; i < n; i++) {
        delete students[i];
    }
    delete[] students;

    Grading* staticStudents[3];
    staticStudents[0] = new Undergraduate(82);
    staticStudents[1] = new Postgraduate(88);
    staticStudents[2] = new Undergraduate(45);

    cout << "Static Grades:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << staticStudents[i]->computeGrade() << endl;
    }

    for (int i = 0; i < 3; i++) {
        delete staticStudents[i];
    }

    return 0;
}
