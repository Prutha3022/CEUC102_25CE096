//Student academic record system
#include<iostream>
#include<string>

using namespace std;

class Record
{
private:
    string name;
    float m1, m2, m3, avgm;
    int rollno;
public:
    Record()
    {
        name = "";
        m1 = 0;
        m2 = 0;
        m3 = 0;
        avgm = 0;
        rollno = 0;
    }
    Record(string nm, float mk1, float mk2, float mk3, int r)
    {
        name = nm;
        m1 = mk1;
        m2 = mk2;
        m3 = mk3;
        avgm = (m1 + m2 + m3)/3;;
        rollno = r;
    }
    void inputrecord()
    {
        cout<<"Enter student name: "<<endl;
        cin.ignore();
        getline(cin, name);
        cout<<"Enter roll number: "<<endl;
        cin>>rollno;
        cout<<"Enter marks for subject 1: "<<endl;
        cin>>m1;
        cout<<"Enter marks for subject 2: "<<endl;
        cin>>m2;
        cout<<"Enter marks for subject 3: "<<endl;
        cin>>m3;
        avgm = (m1 + m2 + m3)/3;

    }
    /*float avgmarks(){
    avgm = (m1 + m2 + m3)/3;
    return avgm;
    }*/
    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Roll number: "<<rollno<<endl;
        cout<<"Total avg: "<<avgm<<endl;
        cout<<endl;
    }
    int getr()
    {
        return rollno;
    }
};

int main()
{
    int choice = 0;
    int count = 0;

    Record s1("Prutha", 30, 40, 50, 96);
    Record s[50];
    cout<<"Enter number of students' entery to record"<<endl;
    cin>>count;
    cout<<endl;

    while(1)
    {
        int i, id;
        cout<<"1. Input Record"<<endl;
        cout<<"2. Display Record"<<endl;
        cout<<endl;
        cout<<"Enter choice"<<endl;
        cin>>choice;
        cout<<endl;

        if(choice == 1)
        {

            for(i = 0; i<count; i++)
            {
                s[i].inputrecord();
            }
        }
        else if(choice == 2)
        {
            cout<<"Enter roll number to search"<<endl;
            cin>>id;

            for(i = 0; i<count; i++)
            {
                if(id == s[i].getr())
                {
                    s[i].display();
                    break;
                }
            }
        }
    }
    s1.display();
    return 0;
}
