#include <iostream>

using namespace std;

class rectangle
{
private:

    int length;
    int breadth;

public:

    rectangle(int l=0, int b=0) //default arguments
    {
        setLength(l);
        setBreadth(b);
    }
    rectangle(rectangle &rect)
    {
        length=rect.length;
        breadth=rect.breadth;
    }
    void setLength(int l)
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
    void setBreadth(int b)
    {
        if(b>=0)
        {
            breadth=b;
        }
        else
        {
            cout<<"Breadth given was negative and as a result default value of breadth was taken into account "<<endl;
            breadth=0;
        }
    }
    int getLength()
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }
    int area()
    {
        return length*breadth;
    }
    int perimeter()
    {
        return 2*(length+breadth);
    }

};
class Cuboid:public rectangle
{
private:
    int height;
public:
    Cuboid(int l=0, int b=0, int h=0)
    {
        setLength(l);
        setBreadth(b);
        height=h;
    }
    void setHeight(int h)
    {
        if(h>=0)
        {
            height=h;
        }
        else
        {
            cout<<"Height given was negative and as a result default value of height was taken into account "<<endl;
            height=0;
        }
    }
    int getHeight()
    {
        return height;
    }
    int volume()
    {
        return getLength()*getBreadth()*height;
    }
};
int main()
{
    rectangle r;
    cout<<"Area of the rectangle r is "<<r.area()<<endl;
    rectangle r1(10,5);
    cout<<"Length of r1 is "<<r1.getLength()<<endl;
    cout<<"Area of the rectangle r1 is "<<r1.area()<<endl;
    rectangle rect(3,4);
    rectangle r2(rect);
    cout<<"Area of the rectangle r2 is "<<r2.area()<<endl;
    Cuboid c;
    cout<<"Volume of the cuboid c is "<<c.volume()<<endl;
    Cuboid c1(10,5,4);
    cout<<"Length of c1 is "<<c1.getLength()<<endl;
    cout<<"Breadth of c1 is "<<c1.getBreadth()<<endl;
    cout<<"Height of c1 is "<<c1.getHeight()<<endl;
    cout<<"Volume of the cuboid c1 is "<<c1.volume()<<endl;
    return 0;
}
