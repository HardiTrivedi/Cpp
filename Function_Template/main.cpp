#include <iostream>

using namespace std;

/*int add(int x,int y)
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
*/
//above two functions are known as function template - functions which are generic in terms of data type and the logic written inside the functions is same.
//this takes up more memory. in order to avoid this, we define both the functions using a same template. this is shown below. the skeleton of the
//template is same as that of the functions.

template<class T>
T add(T x,T y)
{
    T z;
    z=x+y;
    return z;
}

int main()
{
    int a=10,b=6,c=7,d,e;
    float f=2.5f,g=3.6f,h;
    d=add(a,b);
    h=add(f,g);
    cout<<"Sum 1 using function 1 is "<<d<<endl;
    cout<<"Sum 2 using function 2 is "<<h<<endl;
    return 0;
}
