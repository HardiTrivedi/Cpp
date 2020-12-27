#include <iostream>

using namespace std;

class test
{
private:
    int a;
    int b;
public:
    static int Count;
    test()
    {
        a=10;
        b=10;
        Count++;
    }
    static int getCount()
    {
        return Count++; //accessible as count is a static variable
        //a++; //not accessible as a is not a static variable
    }
};
int test::Count=0;
int main()
{
    cout<<"Count without any object "<<test::getCount()<<endl; //static variable can be accessed even without initializing an object.
    test t1;
    test t2;
    cout<<"t1.Count "<<t1.Count<<endl; //will print 2 as count was executed twice - one time for t1 and then for t2.
    cout<<"t2.Count "<<t2.Count<<endl; //will print 2 as count was executed twice - one time for t1 and then for t2.
    cout<<"test::Count "<<test::Count<<endl; //will print 2 as count was executed twice - one time for t1 and then for t2.
    cout<<"test::getCount "<<test::getCount()<<endl; //will print 2 as count was executed twice - one time for t1 and then for t2.
    return 0;
}
