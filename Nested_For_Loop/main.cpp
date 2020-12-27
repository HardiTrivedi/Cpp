#include <iostream>

using namespace std;

int main()
{
    int i,j;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
            //cout<<j<<" "; //to display just j - 1 2 3 in one line with space in between
            cout<<"("<<i<<","<<j<<")"; //to display both i and j in one line inside brackets
        }
        cout<<endl; //to display next 1 2 3 in a new line. this will also repeat 3 times as it is inside the i for loop
    }
    return 0;
}
