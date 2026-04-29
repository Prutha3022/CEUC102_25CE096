#include <iostream>
using namespace std;

class BankAccount {
    double balance;
    string logs[100];
    int logCount;

public:
    BankAccount(double b) {
        balance = b;
        logCount = 0;
    }

    void addLog(string msg) {
        logs[logCount++] = msg;
    }

    void deposit(double amt) {
        addLog("Entered deposit()");
        if (amt <= 0) {
            addLog("Deposit failed");
            throw "Invalid deposit amount";
        }
        balance += amt;
        addLog("Deposit successful");
        addLog("Exiting deposit()");
    }

    void withdraw(double amt) {
        addLog("Entered withdraw()");
        if (amt > balance) {
            addLog("Withdraw failed");
            throw "Insufficient balance";
        }
        balance -= amt;
        addLog("Withdraw successful");
        addLog("Exiting withdraw()");
    }

    void processDeposit(double amt) {
        addLog("Entered processDeposit()");
        deposit(amt);
        addLog("Exiting processDeposit()");
    }

    void processWithdraw(double amt) {
        addLog("Entered processWithdraw()");
        withdraw(amt);
        addLog("Exiting processWithdraw()");
    }

    void displayLogs() {
        cout << "\nTransaction Logs:\n";
        for (int i = 0; i < logCount; i++) {
            cout << logs[i] << endl;
        }
    }

    void showBalance() {
        cout << "Final Balance: " << balance << endl;
    }
};

int main() {
    BankAccount acc(5000);

    try {
        acc.processDeposit(1000);
        acc.processWithdraw(7000);
    }
    catch (const char* msg) {
        cout << "Exception: " << msg << endl;
    }

    acc.showBalance();
    acc.displayLogs();

    return 0;
}
