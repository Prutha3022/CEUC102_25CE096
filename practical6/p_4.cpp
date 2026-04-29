#include <iostream>
using namespace std;

class Account {
protected:
    int accNo;
    double balance;

    double transactions[100];
    int tCount;

public:
    Account() {
        accNo = 0;
        balance = 0;
        tCount = 0;
    }

    Account(int a, double b) {
        accNo = a;
        balance = b;
        tCount = 0;
    }

    void deposit(double amt) {
        balance += amt;
        transactions[tCount++] = amt;
    }

    void withdraw(double amt) {
        if (balance >= amt) {
            balance -= amt;
            transactions[tCount++] = -amt;
        } else {
            cout << "Insufficient Balance" << endl;
        }
    }

    void undo() {
        if (tCount > 0) {
            double last = transactions[--tCount];
            balance -= last;
        }
    }

    void showHistory() {
        cout << "Transactions: ";
        for (int i = 0; i < tCount; i++) {
            cout << transactions[i] << " ";
        }
        cout << endl;
    }

    void display() {
        cout << "Account No: " << accNo << endl;
        cout << "Balance: " << balance << endl;
    }

    ~Account() {}
};

class Savings : public Account {
    double interestRate;
public:
    Savings(int a, double b, double r) : Account(a, b) {
        interestRate = r;
    }

    void display() {
        Account::display();
        cout << "Interest Rate: " << interestRate << endl;
    }

    ~Savings() {}
};

class Current : public Account {
    double overdraft;
public:
    Current(int a, double b, double o) : Account(a, b) {
        overdraft = o;
    }

    void withdraw(double amt) {
        if (balance + overdraft >= amt) {
            balance -= amt;
            transactions[tCount++] = -amt;
        } else {
            cout << "Overdraft limit exceeded" << endl;
        }
    }

    void display() {
        Account::display();
        cout << "Overdraft Limit: " << overdraft << endl;
    }

    ~Current() {}
};

int main() {
    Savings s(101, 5000, 4.5);
    Current c(102, 3000, 2000);

    s.deposit(1000);
    s.withdraw(200);
    s.undo();
    s.display();
    s.showHistory();

    cout << "------------------" << endl;

    c.deposit(500);
    c.withdraw(4000);
    c.undo();
    c.display();
    c.showHistory();

    return 0;
}
