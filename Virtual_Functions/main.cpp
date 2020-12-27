#include <iostream>

using namespace std;

class Base
{
public:
    virtual void fun()
    {
        cout<<"fun of Base "<<endl;
    }
};
class Derived:public Base
{
public:
    void fun()
    {
        cout<<"fun of Derived "<<endl;
    }
};
int main()
{
    Base *p;
    p=new Derived();
    p->fun(); //fun of Derived will be called as Base fun is made virtual
    return 0;
}
