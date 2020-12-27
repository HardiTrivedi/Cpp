#include <iostream>

using namespace std;

int &fun(int &a)
{
    cout<<"a is "<<a<<endl;
    return a;
}
int main()
{
    int x=10;
    fun(x);
    //fun(x)=25; //funx(x)=x so fun(x)=25 means x=25
    cout<<"x is "<<x<<endl;
    return 0;
}
