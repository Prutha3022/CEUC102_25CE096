#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:

    int bsal, bonus, tsal;
    string name;
public:
    Employee()
    {
        name = "";
        bsal = 0;
        bonus = 500;
        tsal = 0;
    }
    Employee(int b)
    {
        name = "";
        bsal = 0;
        bonus = b;
        tsal  = 0;
    }
    void getInput()
    {
        cout<<"Enter name, basic salary and bonus"<<endl;
        cin>>name>>bsal>>bonus;
        cout<<endl;
    }
    inline void total_salary()
    {
        tsal = bonus + bsal;
    }
    void display()
    {
        total_salary();
        cout<<"Name "<<name<<endl;
        cout<<"Total Salary"<<tsal<<endl;
        cout<<endl;
    }

};
int main()
{
    int n, i;
    cout<<"Enter the no of employees"<<endl;
    cin>>n;
    Employee *emp = new Employee[n];
    for(i = 0; i<n; i++)
    {
        emp[i].getInput();
        emp[i].display();
    }
    Employee e1(1000);
    e1.getInput();
    e1.display();

    return 0;
}
