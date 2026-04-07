#include<iostream>
#include<string>
using namespace std;

class Account
{

    int loanid;
    string name;
    int amount;
    int rate;
    int tenure;
    int emi;

public:
    Account()
    {
        loanid = 0;
        name = "";
        amount = 0;
        rate = 0;
        tenure = 0;
        emi = 0;
    }

    void input()
    {
        int id[100]
        cout<<"Enter Name"<<endl;
        cin>>name;
        for(int i = 0; i<100; i++)
        {
            cout<<"Your id is: "<<id[i]<<endl;

        }

    }

};
int main()
{
    return 0;
}
