#include <iostream>

using namespace std;

int g=5;
int fun()
{
    int g=10;
    {
        int g=0;
        g++;
        cout<<"g inside the loop has value "<<g<<endl; //inside this loop there is another local g=0, so it will print 0 as g value.
        //as this loop is exited g again becomes 10.
    }
    cout<<"g inside the function fun but outside loop has value "<<g<<endl; //inside fun there is local g=10, so it will print 10 as g value.
    cout<<"To access global value of g inside this function we use scope resolution g. so global g using ::g (scope resolution) inside fun is "<<::g<<endl;
    // ::g is known as scope resolution g. it is used to access global variable inside a function.
}
int main()
{
    cout<<"g inside the main has value "<<g<<endl; //inside main there is no local g, so it will print global g value
    fun();
    return 0;
}
