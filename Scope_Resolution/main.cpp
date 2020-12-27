#include <iostream>

using namespace std;

class rectangle
{
private:
    int length;
    int breadth;

public:
    rectangle(int l=0,int b=0);
    rectangle(rectangle &r);
    void setLength(int l);
    void setBreadth(int b);
    int getLength();
    int getBreadth();
    int area();
    int perimeter();
    bool isSquare();
    ~rectangle();
};
int main()
{
    rectangle r1;
    cout<<"Area of the rectangle r1 is "<<r1.area()<<endl;
    rectangle r2(10,5);
    cout<<"Area of the rectangle r2 is "<<r2.area()<<endl;
    rectangle r(4,4);
    rectangle r3(r);
    cout<<"Area of the rectangle r3 is "<<r3.area()<<endl;
    if(r.isSquare())
    {
        cout<<"Yes "<<endl;
    }
    return 0;
}
rectangle::rectangle(int l,int b)
{
    setLength(l);
    setBreadth(b);
}
rectangle::rectangle(rectangle &r)
{
    length=r.length;
    breadth=r.breadth;
}
void rectangle::setLength(int l)
{
    if(l>=0)
    {
        length=l;
    }
    else
    {
        cout<<"Length given was negative and as a result default value of length was taken into account "<<endl;
        length=0;
    }
}
void rectangle::setBreadth(int b)
{
    if(b>=0)
    {
        breadth=b;
    }
    else
    {
        cout<<"Length given was negative and as a result default value of length was taken into account "<<endl;
        breadth=0;
    }
}
int rectangle::getLength()
{
    return length;
}
int rectangle::getBreadth()
{
    return breadth;
}
int rectangle::area()
    {
        return length*breadth;
    }
    int rectangle::perimeter()
    {
        return 2*(length+breadth);
    }
bool rectangle::isSquare()
{
    return length==breadth;
}
rectangle::~rectangle()
{
    cout<<"Rectangle destroyed "<<endl;
}
