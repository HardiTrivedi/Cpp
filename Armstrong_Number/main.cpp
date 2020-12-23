#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n,r,sum=0,m;
    cout<<"Enter a number ";
    cin>>n;
    m = n;
    while(n>0)
    {
        r = n%10;
        n = n/10;
        sum += pow(r,3);
    }
    if(sum==m)
    {
        cout<<"The number is an Armstrong number"<<endl;
    }
    else
    {
            cout<<"The number is not an Armstrong number"<<endl;
    }

    return 0;
}
