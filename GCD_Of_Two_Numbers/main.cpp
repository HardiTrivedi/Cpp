#include <iostream>

using namespace std;

int main()
{
    int a,b,i,GCD;
    cout<<"Enter two numbers ";
    cin>>a>>b;
    while(a!=b)
    {
        if(a>b)
        {
            a -= b;
        }
        else
        {
            b -= a;
        }
    }
    cout<<"GCD is "<<a;
    return 0;
}