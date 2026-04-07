#include<iostream>
#include<string>

using namespace std;

void sum()
{
    int n, s;
    int num = 0;
    s = 0;
    cout<<"Enter the total numbers to add"<<endl;
    cin>>n;
    int arr[n];

    cout<<"Enter the numbers"<<endl;

    for(int i = 0; i < n; i++)
    {
        cin>>num;
        arr[i] = num;
        s = num + s;
    }
    cout<<"The sum is: "<<s<<endl;
}

int main()
{
    sum();
    return 0;
}
