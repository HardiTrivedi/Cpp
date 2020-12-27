#include <iostream>

using namespace std;

int *fun(int size)
{
    int *p;
    p=new int[size];
    for(int i=0;i<size;i++)
    {
        p[i]=i+1;
    }
    cout<<"Address of p is "<<p<<endl;
    return p;
}
int main()
{
    int *q;
    q=fun(5);
    cout<<"The elements of the array are ";
    for(int i=0;i<5;i++)
    {
        cout<<q[i]<<endl;
    }
    cout<<"Address of q is "<<q<<endl;
    return 0;
}
