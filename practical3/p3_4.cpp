#include <iostream>
#include <string>
using namespace std;

template <typename T>

void findMax(T a, T b){
if(a>b){
    cout<<"The greater number is: "<<a<<endl;

}
else
{
    cout<<"The greater number is: "<<b<<endl;
}

}

template <typename T>
void rev_arr(T c, T d){
    int n=0;
    for(int i = 0; i<n; i++){
        c[n] = c[n- (n-1)];
        d[n] = c[n- (n-1)];
        cout<<c[i]<<endl;
    }

}
int main()
{
    findMax("f","g");
    findMax(34, 35);
    findMax("vvv", "ab");
    findMax(4466.89, 446.344);

    rev_arr(int arr = {1, 2, 3, 4});

    return 0;
}
