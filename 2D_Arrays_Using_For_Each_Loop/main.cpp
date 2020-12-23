#include <iostream>

using namespace std;

int main()
{
    int arr[2][3]={1,2,3,4,5,6},i,j;
    for(auto& x:arr) //& is used for giving reference. if two nested for each loops are there, & is necessary in the first for each loop. it is optional in second
    {
        for(auto y:x)
        {
            cout<<y<<" ";
        }
        cout<<endl;
    }
    return 0;
}
