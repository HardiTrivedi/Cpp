#include <iostream>

using namespace std;

int main()
{
    int n,r,Reverse=0;
    cout<<"Enter number n ";
    cin>>n;
    while(n>0)
    {
        r = n%10;
        n = n/10;
        Reverse = (Reverse*10)+r;
    }
    cout<<Reverse<<" is the reversed number";
    return 0;
}
