#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;
public:
    Person() {
        name = "";
        age = 0;
    }
    Person(string n, int a) {
        name = n;
        age = a;
    }
    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Employee : public Person {
protected:
    int empID;
public:
    Employee() : Person() {
        empID = 0;
    }
    Employee(string n, int a, int id) : Person(n, a) {
        empID = id;
    }
    void displayEmployee() {
        displayPerson();
        cout << "Employee ID: " << empID << endl;
    }
    int getID() {
        return empID;
    }
};

class Manager : public Employee {
    string department;
public:
    Manager() : Employee() {
        department = "";
    }
    Manager(string n, int a, int id, string dept) : Employee(n, a, id) {
        department = dept;
    }
    void displayManager() {
        displayEmployee();
        cout << "Department: " << department << endl;
        cout << "------------------------" << endl;
    }
};

int main() {
    int n;
    cin >> n;

    Manager* dynamicManagers = new Manager[n];

    for (int i = 0; i < n; i++) {
        string name, dept;
        int age, id;
        cin >> name >> age >> id >> dept;
        dynamicManagers[i] = Manager(name, age, id, dept);
    }

    for (int i = 0; i < n; i++) {
        dynamicManagers[i].displayManager();
    }

    int searchID;
    cin >> searchID;

    for (int i = 0; i < n; i++) {
        if (dynamicManagers[i].getID() == searchID) {
            dynamicManagers[i].displayManager();
        }
    }

    delete[] dynamicManagers;

    Manager staticManagers[3] = {
        Manager("Aman", 30, 101, "HR"),
        Manager("Riya", 28, 102, "Finance"),
        Manager("Kunal", 35, 103, "IT")
    };

    for (int i = 0; i < 3; i++) {
        staticManagers[i].displayManager();
    }

    return 0;
}
