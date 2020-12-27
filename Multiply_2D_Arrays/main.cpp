#include <iostream>

using namespace std;

int main()
{
    int r1,r2,c1,c2,arr1[10][10],arr2[10][10],arr3[10][10]={0},i,j,k;
    cout<<"Enter number of rows and columns of the first matrix ";
    cin>>r1>>c1;
    cout<<"Enter number of rows and columns of the second matrix ";
    cin>>r2>>c2;
    if(c1!=r2) //if number of columns of the first matrix is not equal to number of rows of the second matrix, multiplication is not possible
    {
        cout<<"Number columns of the first matrix is not equal to number of rows of the second matrix "<<endl;
        return 0;
    }
    else
    {
        cout<<"Enter the elements of matrix 1 "<<endl;
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                cin>>arr1[i][j];
            }
        }
        cout<<"Enter the elements of matrix 2 "<<endl;
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                cin>>arr2[i][j];
            }
        }
    }
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            for(k=0;k<c1;k++) // or for(k=0;k<r2;k++) because c1=r2
            {
                arr3[i][j]+=arr1[i][k]*arr2[k][j];
            }
        }
    }
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            cout<<arr3[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
