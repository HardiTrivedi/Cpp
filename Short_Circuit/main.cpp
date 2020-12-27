#include <iostream>

using namespace std;

int main()
{
    int a,b,i;
    cout<<"Enter a,b,i "<<endl;
    cin>>a>>b>>i;
    if(a>b && ++i<=b)
    {
    }
    /*if(a>b || ++i<=b)
    {
    }*/
    cout<<"i is: "<<i<<endl;
    return 0;
}
