#include <iostream>
#include <string>
using namespace std;

class Customer{
private:
    int num;
    int balance;
    string name;


public:
    static int count;
    Customer(){
    num = 0;
    balance = 0;
    name = "null";

    }

    void getData(){
    cout<<"Enter account holder's"<<endl;
    cout<<"Account number, balance and name"<<endl;

    cin>>num>>balance;
    cin.ignore();
    cin>>name;
    cout<<num<<" "<<balance<<" "<<name<<endl;
    }

    void displayTotalAcc(){
    cout<<"The total number of accounts are: "<<endl;
    cout<<count<<endl;
    }
};

int Customer::count = 0;

int main(){
    int n = 0;
    int val = 0;
    cout<<"Enter number of customers"<<endl;
    cin>>n;
    Customer *obj = new Customer[n];
    for(int i=0; i<n; i++){
        Customer::count++;
        obj[i].getData();

    }
    cout<<"Press one to check number of total accounts created"<<endl;
    cin>>val;
    if(val == 1){
        cout<<Customer::count<<endl;
    }
return 0;
}
