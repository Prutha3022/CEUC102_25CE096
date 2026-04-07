#include<iostream>
#include<string>

using namespace std;

class Library
{
private:
    int bookid = 0;
    int copies = 0;
    int totalbooks = 0;
    string author = "";
    string title = "";

public:
    void addbooks()
    {
        cout<<"Enter the book Title"<<endl;
        getline(cin, title);
        cin.ignore();
        cout<<"Enter the book Author"<<endl;
        getline(cin, author);
        cin.ignore();
        cout<<"Book Id"<<endl;
        cin>>bookid;
        cout<<"Available copies"<<endl;
        cin>>copies;
        totalbooks = totalbooks+1;
    }
    int getbookid()
    {
        return bookid;
    }
    int gettotalbooks()
    {
        return totalbooks;
    }

    void issuebook()
    {
        if(copies>0)
        {
            copies = copies-1;
            cout<<"Book Issued"<<endl;
        }
        else
        {
            cout<<"No copies available!"<<endl;
        }
    }
    void returnbook()
    {
        copies = copies+1;
    }
    void display()
    {
        cout<<"Total Books in Library are: "<<totalbooks<<endl;
    }
    int getcopies()
    {
        return copies;
    }

};

int main()
{
    Library books[100];
    int count = 1;
    int choice = 0;

    while(1)
    {
        int id = 0;
        int allbooks = 0;
        cout<<"MENU"<<endl;
        cout<<endl;
        cout<<"1. Add book"<<endl;
        cout<<"2. Issue book"<<endl;
        cout<<"3. Return book"<<endl;
        cout<<"4. Display total books"<<endl;
        cout<<"5. Exit"<<endl;
        cin>>choice;
        if(choice == 1)
        {
            for(int i = 0; i<count; i++)
            {
                books[i].addbooks();
                count++;
                break;
            }
        }
        else if(choice == 2)
        {
            cout<<"Enter book Id to Issue"<<endl;
            cin>>id;
            for(int i = 0; i<count; i++)
            {
                if(books[i].getbookid()==id)
                {
                    books[i].issuebook();
                }
                break;
            }
        }
        else if(choice == 3)
        {
            cout<<"Enter book ID to return"<<endl;
            cin>>id;
            for(int i = 0; i<count; i++)
            {
                if(books[i].getbookid()==id)
                {
                    books[i].returnbook();
                }
                break;
            }

            cout<<"Book returned"<<endl;
        }
        else if(choice == 4)
        {
            for(int i = 0; i < count; i++)
            {
                allbooks = allbooks + books[i].getcopies();

            }
            cout<<"Total books are: "<<allbooks<<endl;
        }
        else
        {
            break;
        }
    }
    return 0;
}

