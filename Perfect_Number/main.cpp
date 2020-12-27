#include <iostream>

using namespace std;

int main()
{
    int n,i,sum=0;
    cout<<"Enter the number you want to find factors of ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            sum +=i;
        }
    }
    sum -= n; //if the sum of all factors of a number (except the number itself, i.e., minus the number) is equal to the number, then that number is known as a perfect number
    if(sum==n)
    {
        cout<<n<<" is a perfect number"<<endl;
    }
    else
    {
        cout<<n<<" is not a perfect number"<<endl;
    }
    /*Alternatively, after the completion of for loop, write
    if(sum==2*n)
    {
        cout<<n<<" is a perfect number"<<endl;
    }*/
    return 0;
}
