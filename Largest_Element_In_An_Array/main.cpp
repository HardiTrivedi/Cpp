#include <iostream>

using namespace std;

int main()
{
    int arr[10]={10,2,13,4},Max=arr[0],i;
    for(i=0;i<10;i++)
    {
        if(arr[i]>Max)
        {
            Max=arr[i];
        }
    }
    cout<<"Largest element in the array is "<<Max<<endl;
    return 0;
}
