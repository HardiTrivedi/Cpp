#include <iostream>

using namespace std;

int main()
{
    int a=10,b=0,c=20;
    try
    {
        if(b==0) //if b=0 perform throw
        {
            throw 0; //you can throw any number
        }
        //else perform below operation
        c=a/b; //this will not be executed as b=0 so program will jump from try to catch.
        cout<<"c is "<<c<<endl;
    }
    catch(int e) //catch whatever number was thrown
    {
        cout<<"Division by zero error. "<<"Error code "<<e<<endl;
    }
     return 0;
}
