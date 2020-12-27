#include <iostream>

using namespace std;

class Parent
{
private:
    int x;
protected:
    int y;
public:
    int z;
    void funParent()
    {
        x=10;
        y=20;
        z=30;
    }
};
class Child:public Parent
{
public:
    void funChild()
    {
        //x=10; //not accessible as private to parent
        y=20;
        z=30;
    }
};
class Grandchild:public Child
{
public:
    void funGrandchild()
    {
        //x=10; //not accessible as private to parent
        y=20;
        z=30;
    }
};
int main()
{
    Child c;
    //c.x=10; //not accessible as private to parent
    //c.y=20; //not accessible as protected to parent
    c.z=30;
    return 0;
}
