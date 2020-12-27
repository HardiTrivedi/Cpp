#include <iostream>

using namespace std;

void fun(int n)
{
    if(n>0)
    {
        fun(n-1); //here fun is called before cout. in previous recursive function program, fun was called after cout. so, this will print 1,2,3,4,5
        cout<<"n is "<<n<<endl;
    }
}
int main()
{
    int x=5;
    fun(x);
    return 0;
}
