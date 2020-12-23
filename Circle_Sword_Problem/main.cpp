#include <iostream>

using namespace std;

int main()
{
    int n,s,i,m=0;
    cout<<"Enter n ";
    cin>>n;
    if(n>0)
    {
        if((n&(n-1))==0)
        {
            s=1;
            cout<<s<<endl;
            return 0;
        }
        else
        {
            for(i=n;i>=1;i--)
            {
                if((i&(i-1))==0)
                {
                    m=i;
                    break;
                }
            }
            s=1+((n-m)*2);
        }
    }
    cout<<s<<endl;
    //return 0;
}
