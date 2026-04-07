#include<iostream>
#include<string>
using namespace std;

class Item
{

    int id = 0;
    int price = 0;
    int stocks = 0;
    string name = "unknown";

public:
    Item()
    {

    }
    Item(int i, string n, int p, int s)
    {
        id = i;
        name = n;
        price = p;
        stocks = s;
    }

};

int main()
{
    Item i;
    return 0;
}
