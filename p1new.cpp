#include<iostream>
#include<string>
using namespace std;

class bank_accounts {
private:
    double accountno;
    float balance;
    char account_name[30];

public:
    void createacc() {
        cout << "Enter account holder name: ";
        cin >> account_name;
        cout << "Enter account number: ";
        cin >> accountno;
        cout << "Enter initial balance: ";
        cin >> balance;
    }

    // Helper function
    double getAccountNo() {
        return accountno;
    }

    void depositmoney(double amount) {
        balance += amount;
        cout << "Successfully deposited. New balance: " << balance << endl;
    }

    void withdrawmoney(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawal successful.\n";
        } else {
            cout << "Error: Insufficient balance.\n";
        }
    }

    void checkaccbalance() {
        cout << "Current Balance: " << balance << endl;
    }
};

// --- NEW SEARCH FUNCTION ---
// Returns the index of the account if found, otherwise returns -1
int findAccount(bank_accounts acc[], int total_accounts, double searchID) {
    for (int i = 0; i < total_accounts; i++) {
        if (acc[i].getAccountNo() == searchID) {
            return i; // Found it! Return the position in the array
        }
    }
    return -1; // Not found
}

int main() {
    bank_accounts acc[100];
    int n = 0; // Current number of accounts created
    int choice;
    double searchID, amount;

    cout << "Welcome to our bank\n";
    do {
        cout << "\n--- MENU ---\n1. Create Account\n2. Deposit\n3. Withdraw\n4. Check Balance\n5. Exit\nChoice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                if (n < 100) {
                    acc[n].createacc();
                    n++;
                } else {
                    cout << "Bank database full!\n";
                }
                break;

            case 2:
                cout << "Enter account number to deposit into: ";
                cin >> searchID;
                {
                    int index = findAccount(acc, n, searchID);
                    if (index != -1) {
                        cout << "Enter amount: ";
                        cin >> amount;
                        acc[index].depositmoney(amount);
                    } else {
                        cout << "Account not found!\n";
                    }
                }
                break;

            case 3:
                cout << "Enter account number to withdraw from: ";
                cin >> searchID;
                {
                    int index = findAccount(acc, n, searchID);
                    if (index != -1) {
                        cout << "Enter amount: ";
                        cin >> amount;
                        acc[index].withdrawmoney(amount);
                    } else {
                        cout << "Account not found!\n";
                    }
                }
                break;

            case 4:
                cout << "Enter account number to check: ";
                cin >> searchID;
                {
                    int index = findAccount(acc, n, searchID);
                    if (index != -1) {
                        acc[index].checkaccbalance();
                    } else {
                        cout << "Account not found!\n";
                    }
                }
                break;
        }
    } while (choice != 5);

    return 0;
}
