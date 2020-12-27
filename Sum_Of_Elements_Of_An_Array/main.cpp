#include <iostream>

using namespace std;

int main()
{
    int arr[10]={1,2,3,4},sum=0;
    for(auto x:arr)
    {
        sum+=x;
    }
    cout<<"Sum of elements of the array is "<<sum;
    return 0;
}
