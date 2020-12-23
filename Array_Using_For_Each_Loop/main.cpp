#include <iostream>

using namespace std;

int main()
{
    int i,arr[10]={1,2,3,4,5,6,7,8,9,10};
    for(auto& x:arr) //for each loop. auto is used instead of writing int or any other data type for x. auto will let the compiler find out the data type on its own and proceed further.
                    //here because only one for each loop is there, & is optional. But if two nested for each loops are there, & is necessary in the first for each loop
    {
        cout<<x<<endl;
    }
    return 0;
}
