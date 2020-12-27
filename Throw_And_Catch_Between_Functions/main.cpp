#include <iostream>

using namespace std;

float division(float x, float y)
{
    if(y==0) //if y=0 throw
    {
        throw 0;
    }
    //else perform division
    return x/y;
}
int main()
{
    float a=2.5f,b=0.0f,c;
    try
    {
        c=division(a,b);
        cout<<"c is "<<endl;
    }
    catch(int e)
    {
        cout<<"Division by zero error. "<<"Error code "<<e<<endl;
    }
    return 0;
}
