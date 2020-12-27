#include <iostream>

using namespace std;

class parent
{
public:
    void display()
    {
        cout<<"Display of parent "<<endl;
    }
};
class child:public parent
{
public:
    void display()
    {
        cout<<"Display of child "<<endl;
    }
};
int main()
{
    parent p;
    p.display(); //will display parent class display
    cout<<endl;
    child c;
    c.display(); //will display child class display
    return 0;
}
