#include <iostream>

using namespace std;

int main()
{
    int arr[10],n,i,sum=0;
    float average;
    cout<<"Enter the number of elements ";
    cin>>n;
    cout<<"Enter the elements ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    average=(float)sum/n;
    cout<<"Average of the elements is "<<average;
    return 0;
}
