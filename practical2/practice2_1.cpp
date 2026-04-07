#include<iostream>
#include<string>
using namespace std;

class Rectangle
{
private:
    float length, breadth, area, perimeter;
public:
    Rectangle()
    {
        length = 0;
        breadth = 0;
        area = 0;
        perimeter = 0;

    }
    Rectangle(float l, float b)
    {
        length = l;
        breadth = b;
        area = l * b;
        perimeter = 2 * (l + b);
    }
    void setdata(float l, float b)
    {
        length = l;
        breadth = b;
        area = l*b;
        perimeter = 2*(l+b);

    }
    void display()
    {
        cout<<"length is: "<<length<<endl;
        cout<<"breadth is: "<<breadth<<endl;
        cout<<"area is: "<<area<<endl;
        cout<<"perimeter is: "<<perimeter<<endl;
        cout<<endl;
    }
};
int main()
{
    float len, br;
    int count = 1, choice = 0, index = 0;
    cout<<"Enter how many rectangles you want to create (max upto 100)"<<endl;
    cin>>count;
    Rectangle objs[100];
    while(1)
    {
        cout<<"1. New rectangle"<<endl;
        cout<<"2. View all rectangle"<<endl;
        cout<<"3. Update dimmensions of any rectangle"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<endl;
        cout<<"Enter choice"<<endl;
        cin>>choice;
        cout<<endl;
        if(choice == 1)
        {
            for(int i=0; i<count; i++)
            {
                cout<<"Enter length for rectangle "<<i+1<<": "<<endl;
                cin>>len;
                cout<<"Enter breadth for rectangle "<<i+1<<": "<<endl;
                cin>>br;
                objs[i].setdata(len, br);
                objs[i].display();
            }
        }
        else if(choice == 2)
        {
            for(int i = 0; i<count; i++)
            {
                cout<<"rectangle "<<i+1<<endl;
                objs[i].display();
            }
        }
        else if(choice == 3)
        {
            cout<<"Enter the rectangle number to change dimensions"<<endl;
            cin>>index;
            if(index>0&&index<=count)
            {
                for(int i = 0; i<index; i++)
                {
                    cout<<"Enter length for rectangle "<<i+1<<": "<<endl;
                    cin>>len;
                    cout<<"Enter breadth for rectangle "<<i+1<<": "<<endl;
                    cin>>br;
                    objs[i].setdata(len, br);
                    objs[i].display();
                }
            }
            else
            {
                cout<<"Enter valid Index"<<endl;
            }
        }
        else
        {
            break;
        }
    }
    return 0;
}
