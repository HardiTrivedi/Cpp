#include <iostream>

using namespace std;

class outer
{
public:
    int a;
    static int b;
    void fun()
    {
        i.show(); //function of inner are accessible inside outer as inner class functions are public
        cout<<i.x<<endl;
    }
    class inner
    {
    public:
        int x;
        void show()
        {
            //cout<<a<<endl; //not accessible as a is not static. inner class can only access static variables of outer class
            //but inner class objects can access all variables of outer class.
            cout<<b<<endl;
        }
    };
    inner i;
};
int outer::b=20;
int main()
{
    outer::inner i1; //creating an object of inner class outside outer class using scope resolution.
    i1.show(); //this will call show() and thus print b.
    cout<<i1.x<<endl;
    return 0;
}
