#include <iostream>

using namespace std;

int maximum(int a, int b, int c)
{
    if(a>b && a>c)
    {
        return a;
    }
    else if(b>c)
    {
        return b;
    }
    else
    {
        return c;
    }
}
int main()
{
    int x=15,y=10,z=6,max_number;
    max_number=maximum(x,y,z);
    cout<<"Maximum number is "<<max_number<<endl;
    return 0;
}
