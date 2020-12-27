#include <iostream>

using namespace std;

int main()
{
    int arr[10],i,Min=arr[0];
    cout<<"Enter the elements ";
    for(i=0;i<10;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<10;i++)
    {
        if(arr[i]<Min)
        {
            Min=arr[i];
        }
    }
    cout<<"The minimum element in the array is "<<Min;
    return 0;
}
