#include<iostream>
#include<string>
using namespace std;

class Library
{
private:
    int bookid, copies;
    string author, title;
public:
    void addbook()
    {
        cout<<"Enter Book ID Number\n";
        cin>>bookid;
        cin.ignore();

        cout<<"Enter the book title\n";
        getline(cin, title);

        cout<<"Enter the Author name\n";
        getline(cin, author);

        cout<<"Enter number of copies\n";
        cin>>copies;

        cout<<"Book Added\n";
    }
    void issuebook()
    {
        if(copies>0)
        {
            copies--;
            cout<<"Book Issued\n";
        }
        else
        {
            cout<<"No copies available\n";
        }
    }
    void returnbook()
    {
        copies  = copies +1;
        cout<<"Book returned\n";
    }
    void displaybooks()
    {
        cout<<"Book Details: \n";
        cout<<" Book title "<<title<<endl;
        cout<<" Book author "<<author<<endl;
        cout<<" Book copies "<<copies<<endl;
    }

    int getBookId()
    {
        return bookid;
    }
};

int main()
{
    Library books[100];
    int choice;
    int count = 0;
x:
    while(1)
    {
        cout<<"Library Menu:"<<endl;
        cout<<"1. Add Book:"<<endl;
        cout<<"2. Issue Book:"<<endl;
        cout<<"3. Return Book:"<<endl;
        cout<<"4. Display Number of copies"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"6. Return to Menu"<<endl;
        cout<<"Enter Choice"<<endl;
        cin>>choice;

        if (choice == 1)
        {
            if(count<100)
            {
                books[count].addbook();
                count++;
            }
            else
            {
                cout<<"Library is full."<<endl;
            }
            goto x;
        }
        else if(choice == 2)
        {
            int id, i;
            cout<<"/nEnter book Id to issue";
            cin>>id;
            bool found  = false;
            for(i = 0; i<=count; i++)
            {
                if(books[i].getBookId()== id)
                {
                    books[i].issuebook();
                    found = true;
                    break;
                }
                else
                {
                    cout<<"Book not found."<<endl;
                }
            }
            goto x;
        }
        else if(choice==3)
        {
            int id, i;
            cout<<"/nEnter book Id to return";
            cin>>id;
            bool found  = false;
            for(i = 0; i<=count; i++)
            {
                if(books[i].getBookId()== id)
                {
                    books[i].returnbook();
                    found = true;
                    break;
                }
                else
                {
                    cout<<"Book not found."<<endl;
                }
            }
            goto x;
        }
        else if(choice == 4)
        {
            int id, i;
            cout<<"Enter book Id to display details"<<endl;
            cin>>id;
            bool found  = false;
            for(i = 0; i<=count; i++)
            {
                if(books[i].getBookId()== id)
                {
                    books[i].displaybooks();
                    found = true;
                    break;
                }
                else
                {
                    cout<<"Book not found."<<endl;
                }
            }
            goto x;
        }
        else if(choice == 5)
        {
            cout<<"Exiting"<<endl;
            break;
            goto x;
        }
        else if(choice == 6)
        {
            cout<<"Returning"<<endl;
            goto x;
        }

        else
        {
            cout<<"Invalid choice"<<endl;
            goto x;
        }
        return 0;
    }
}
