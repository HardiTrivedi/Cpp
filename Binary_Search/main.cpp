#include <iostream>

using namespace std;

int main()
{
    int arr[10],i,key,l=0,h=9,mid;
    cout<<"Enter elements of the array ";
    for(i=0;i<10;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the element you want to search ";
    cin>>key;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(key==arr[mid])
        {
            cout<<"The element "<<key<<" was found at index "<<mid;
            return 0;
        }
        else if(key>arr[mid])
        {
            l=mid+1;
        }
        else
        {
            h=mid-1;
        }
    }
    cout<<"The element "<<key<<" was not found in the array"<<endl;
    return 0;
}
