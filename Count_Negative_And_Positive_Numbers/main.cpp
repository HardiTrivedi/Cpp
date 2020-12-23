#include <iostream>

using namespace std;

int main()
{
    int arr[10],i,Count_Negative=0,Count_Positive=0,Zeros=0;
    cout<<"Enter the elements ";
    for(i=0;i<10;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<10;i++)
    {
        if(arr[i]<0)
        {
            Count_Negative++;
        }
        else if(arr[i]>0)
        {
            Count_Positive++;
        }
        else
        {
            Zeros++;
        }
    }
    cout<<"Number of positive elements in the array is "<<Count_Positive<<endl;
    cout<<"Number of negative elements in the array is "<<Count_Negative<<endl;
    cout<<"Number of zeros in the array is "<<Zeros<<endl;
    return 0;
}
