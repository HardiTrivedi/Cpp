#include <iostream>

using namespace std;

int main()
{
    int arr[2][3]={1,2,3,4,5,6},i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
