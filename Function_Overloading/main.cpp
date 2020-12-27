#include <iostream>

using namespace std;

int add(int x,int y)
{
    int z;
    z=x+y;
    return z;
}
float add(float x,float y)
{
    float z;
    z=x+y;
    return z;
}
//above two functions are known as function template - functions which are generic in terms of data type.

int add(int x,int y,int z)
{
    float w;
    w=x+y+z;
    return w;
}
/* this is not function overloading as argument list is same. only return data type is float which is different. so it causes conflicts.
float add(int x,int y)
{
    int z;
    z=x+y;
    return z;
}
*/
int main()
{
    int a=10,b=6,c=7,d,e;
    float f=2.5f,g=3.6f,h;
    d=add(a,b);
    e=add(a,b,c);
    h=add(f,g);
    cout<<"Sum 1 using function 1 is "<<d<<endl;
    cout<<"Sum 2 using function 2 is "<<e<<endl;
    cout<<"Sum 3 using function 3 is "<<h<<endl;
    return 0;
}
