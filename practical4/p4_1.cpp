#include<iostream>
using namespace std;

int main()
{
    int n = 0;
    cout<<"Enter the size ";
    cin>>n;
    int * arr = new int[n];
    for(int i = 0; i<n; i++)
    {
        cout<<"Enter element "<<i+1<<": ";
        cin>>arr[i];
    }
    cout<<"Your array is: "<<endl;
    for(int i = 0; i<n; i++){
        cout<<i+1<<". "<<arr[i]<<endl;
    }

    int new_e, new_s;
    new_s = n+1;
    cout<<"Enter new element ";
    cin>>new_e;
    int * temp = new int[new_s];
    for(int i = 0; i<n; i++){
        temp[i] = arr[i];
    }
    temp[n]= new_e;
    cout<<"Your new array is:"<<endl;
    for(int i = 0; i<new_s; i++){
         cout<<i+1<<". "<<temp[i]<<endl;
    }

    int p;
    cout<<"Enter the position you wnat to delete ";
    cin>>p;
    p--;
    for(int i = p; i<new_s-1; i++){
        temp[i]=temp[i+1];

    }
    cout<<"Your new array is:"<<endl;
    for(int i = 0; i<new_s-1; i++){
         cout<<i+1<<". "<<temp[i]<<endl;
    }
    return 0;
}
