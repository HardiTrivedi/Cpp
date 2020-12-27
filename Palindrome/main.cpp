#include <iostream>

using namespace std;

int main()
{
    int n,r,Reverse=0,m;
    cout<<"Enter a number ";
    cin>>n;m=n;
    while(n>0)
    {
        r=n%10;
        n=n/10;
        Reverse = Reverse*10+r;
    }
    if(Reverse==m)
    {
        cout<<"The number "<<m<<" is a palindrome";
    }
    else
    {
        cout<<"The number "<<m<<" is not a palindrome";
    }
    return 0;
}
