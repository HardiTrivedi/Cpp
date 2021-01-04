#include <iostream>

using namespace std;

int BinarySearch(int arr[], int Size, int key)
{
    int l=0,h=Size-1,mid;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(key==arr[mid])
        {
            return mid;
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
    return -1; //element was not found
}
int main()
{
    int a[100],n,k,index;
    cout<<"Enter size of the array ";
    cin>>n;
    cout<<"Enter the array ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter a element you want to search ";
    cin>>k;
    index=BinarySearch(a,n,k);
    cout<<"Element "<<k<<" found at index "<<index<<endl;
    return 0;
}
