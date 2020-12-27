#include <iostream>

using namespace std;

int main()
{
    int n,i,Factorial=1;
    cout<<"Enter a number you want to find factorial of ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        Factorial *= i;
    }
    cout<<n<<"! is "<<Factorial<<endl;
    return 0;
}
