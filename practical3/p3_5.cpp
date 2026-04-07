#include<iostream>
using namespace std;

int superDigit(int n)
{
    if(n < 10)
        return n;

    int sum = 0;
    while(n > 0)
    {
        sum = sum + n%10;
        n = n / 10;
    }
    return superDigit(sum);
}

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    int result = superDigit(num);

    cout << "Super Digit is: " << result << endl;

    return 0;
}
