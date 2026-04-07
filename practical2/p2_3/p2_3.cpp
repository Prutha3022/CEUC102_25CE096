#include<iostream>
#include<string>
using namespace std;

class SavingsAccount
{
    int id;
    string name;
    int balance;
public:
    SavingsAccount()
    {
        balance = 0;
    }


    void createAccount()
    {
        cout<<"Enter id, name"<<endl;
        cin>>id>>name;

    }
    void searchAccount(){
    cout<<"Enter Id"<<endl;
    cin<<id;
    }
    void depositMoney()
    {
        int amount;
        cin>>amount;
        count<<"Enter amount to deposit"<<endl;

        balance = balance+amount;
        cout<<"deposit done"<<endl;

    }
    void withdrawMoney()
    {
        int amount;
        cin>>amount;
        count<<"Enter amount to withdraw"<<endl;
        if(amount>balance)
        {
            cout<<"Try again!"<endl;
        }
        else
        {
            balance = balance-amount;
            cout<<"withdraw done"<<endl;
        }
    }
    void searchAccount()
    {


    }
    void display()
    {
        cout<<balance<<endl;
    }

};

int main()
{
    int SavingsAccount[100];
    int choice;
    int count = 0;
    while(1)
    {
        cout<<"Savings Account Menu:"<<endl;
        cout<<"1. Create Account:"<<endl;
        cout<<"2. Withdraw Money"<<endl;
        cout<<"3. Deposit Money"<<endl;
        cout<<"4. Display Summary"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"6. Return to Menu"<<endl;
        cout<<"Enter Choice"<<endl;
        cin>>choice;
    }

    if(choice == 1)
    {
        if(count<100)
        {
            SavingsAccount[count].createAccount();
            count++;
        }
        else
        {
            cout<<"No more Entry"<<endl;
        }
    }

    return 0;
}
