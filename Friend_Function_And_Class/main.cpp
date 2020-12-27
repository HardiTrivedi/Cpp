#include <iostream>

using namespace std;

class your;
class My
{
private:
    int a;
protected:
    int b;
public:
    int c;
    friend void fun();
    friend your;
};
void fun()
{
    My m;
    m.a=5; //accessible as void fun is a friend
    m.b=15; //accessible as void fun is a friend
    m.c=25; //accessible as c is public
}
class your
{
private:
    int x;
protected:
    int y;
public:
    int z;
    My m1;
    void fun()
    {
        m1.a=5; //accessible as your is a friend
        m1.b=15; //accessible as your is a friend
        m1.c=25; //accessible as c is public
    }
};
int main()
{
    return 0;
}
