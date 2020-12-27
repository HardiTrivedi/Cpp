#include <iostream>

using namespace std;

int LinearSearch(int arr[], int size, int key)
{
    for(int i=0;i<size;i++)
    {
        if(key==arr[i])
        {
            return i;
        }
        else
        {
            return -1; //element not found
        }
    }
}
int main()
{
    int a[100],n,k,index;
    cout<<"Enter size of the array ";
    cin>>n;
    cout<<"Enter an array ";
    for(int j=0;j<n;j++)
    {
        cin>>a[j];
    }
    cout<<"Enter a element you want to search ";
    cin>>k;
    index=LinearSearch(a,n,k);
    cout<<"Element "<<k<<" found at index "<<index<<endl;
    return 0;
}
