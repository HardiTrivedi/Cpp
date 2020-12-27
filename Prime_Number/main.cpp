#include <iostream>

using namespace std;

int main()
{
    int n,i,counter=0;
    cout<<"Enter a number ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            counter++;
        }
    }
    if(counter==2)
    {
        cout<<n<<" is a prime number"<<endl;
    }
    else
    {
        cout<<n<<" is not a prime number"<<endl;
    }
    return 0;
}
