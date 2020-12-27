#include <iostream>

using namespace std;

class Base
{
public:
    virtual void fun()=0; //because inherited classes are deriving nothing from this class except polymorphism, we define this virtual void as zero.
    //this is known as pure virtual class.
};
class Derived:public Base
{
public:
    void fun()
    {
        cout<<"fun of Derived "<<endl;
    }
};
class Derived2:public Base
{
public:
    void fun()
    {
        cout<<"fun of Derived2 "<<endl;
    }
};
int main()
{
    Base *p;
    p=new Derived();
    p->fun(); //fun of Derived will be called as Base fun is made pure virtual

    //Base pointer of same name (p) can be used to call Derived2. this is known as polymorphism.

    p=new Derived2();
    p->fun(); //fun of Derived2 will be called as Base fun is made pure virtual
    return 0;
}
