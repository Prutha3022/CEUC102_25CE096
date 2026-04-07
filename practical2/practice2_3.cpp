#include<iostream>
#include<string>
using namespace std;

class Account{
private:
    double accId;
    string name;
    int balance;
public:
    Account(){
    accId = 0;
    name = "null";
    balance = 0;
    }

    void createacc(){
    cout<<"Enter unique account ID"<<endl;
    cin>>accId;
    cout<<"Enter account holder's name"<<endl;
    cin.ignore();
    getline(cin, name);

    }
};

