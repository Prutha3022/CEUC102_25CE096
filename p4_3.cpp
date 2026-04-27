#include<iostream>
using namespace std;

int main(){
int s;

cout<<"Enter any size of array"<<endl;
cin>>s;
int *arr = new int[s];
int n[5];
cout<<"Enter array 1 elements: "<<endl;
for(int i = 0; i<s; i++){
    cin>>n[i];
}
cout<<endl;

cout<<"The array 1 is: ";
for(int i = 0; i<s; i++){
    cout<<n[i]<<" ";
}
cout<<endl;

for(int i = 0; i<s-1; i++){
    for(int j = 0; j<s-1; j++){
        if(n[j]>n[j+1]){
            int temp;
            temp = n[j];
            n[j] = n[j+1];
            n[j+1] = temp;
        }
    }
}
cout<<"The sorted array is: ";
for(int i = 0; i<s; i++){
    cout<<n[i]<<" ";
}
delete[] arr;

return 0;
}
