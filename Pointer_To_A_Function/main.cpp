#include <iostream>

using namespace std;

int max(int x,int y)
{
    if(x>y)
    {
        return x;
    }
    else
    {
        return y;
    }
}
int min(int x,int y)
{
    if(x<y)
    {
        return x;
    }
    else
    {
        return y;
    }
}
int main()
{
    int (*fp)(int,int); //declaration of pointer function
    fp=max; //initialization of pointer function to max
    int a=(*fp)(10,5); //calling of pointer function to max
    cout<<"Max function result "<<a<<endl;

    fp=min; //initialization of pointer function to min
    int b=(*fp)(10,5); //calling of pointer function to min
    cout<<"Min function result "<<b<<endl;
    return 0;
}
