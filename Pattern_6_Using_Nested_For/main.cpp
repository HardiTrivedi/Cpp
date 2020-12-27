#include <iostream>

using namespace std;

int main()
{
    int i,j;
    for(i=1;i<=3;i++) //in general - 3 = n = number of rows
    {
        for(j=1;j<=5;j++) //in general - 5 = 2*n-1 = number of col
        {
            if(i+j<=3) // in general - 3 = n
            {
                cout<<" ";
            }
            else if(j-i>=3) // in general - 3 = n
            {
                cout<<" ";
            }
            else
            {
                cout<<"*";
            }
        }
        cout<<endl;
    }
    return 0;
}
