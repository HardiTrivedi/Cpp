#include <iostream>

using namespace std;

void fun()
{
    static int v=0;
    //if v were not static, i.e., int v=0 was there instead, then when first time fun() is called, v will be created in stack, increment by 1 and print v=1.
    //and as v is a local variable, it will only run and stay in stack as long as fun() is running and it will get deleted from stack once fun() is executed.
    //when fun() is called for the second time, it will create v in stack from scratch. so v=0 again and then it will be incremented to 1 and again 1 will
    //be printed. same for the third time fun() is called. so all the 3 times when fun() is called and provided v is a local variable, every time 1 will
    //be printed. but as we can see, when we use static int v, it will not get deleted from memory as static created v in code section instead of stack
    //it will remain in code section as long as the whole program is running, thus, incrementing each time from the previous value and not from scratch (0)
    //if we had declared v as a global variable, same results would be seen.
    int g=5;
    v++;
    cout<<"g is "<<g<<" "<<"v is "<<v<<endl;
}
int main()
{
    //fun is executed 3 times
    fun(); //this will print g=5 and v=1
    fun(); //this will print g=5 and v=2
    fun(); //this will print g=5 and v=3
}
