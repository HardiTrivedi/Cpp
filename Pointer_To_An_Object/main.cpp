#include <iostream>

using namespace std;

class rectangle
{
    public: //class should be made public so that its data members like length and breadth can be accessed by main function.
    int length;
    int breadth;
    int area()
    {
        return length*breadth;
    }
    int perimeter()
    {
        return 2*(length+breadth);
    }
};
int main()
{
    rectangle r1;
    rectangle *p;
    p=&r1;
    p->length=10;
    p->breadth=5;
    cout<<"Area is "<<p->area()<<endl;
    return 0;
}
