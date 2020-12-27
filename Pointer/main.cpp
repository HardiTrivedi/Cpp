#include <iostream>

using namespace std;

int main()
{
    int x=10,*p;
    p=&x; //or *p=&x
    cout<<"x = "<<x<<endl;
    cout<<"Address of x = "<<&x<<endl;
    cout<<"p = "<<p<<endl;
    cout<<"Address of p = "<<&p<<endl;
    cout<<"Data where p is pointing that is, *p = "<<*p<<endl;
    return 0;
}
