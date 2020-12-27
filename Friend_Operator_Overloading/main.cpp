#include <iostream>

using namespace std;

class Complex
{
private:
    int real;
    int img;
public:
    Complex(int r=0, int i=0)
    {
        real=r;
        img=i;
    }
    void display()
    {
        cout<<"Addition is "<<real<<" +i"<<img<<endl;
    }
    friend Complex operator+(Complex, Complex);
};
Complex operator+(Complex c1, Complex c2)
{
    Complex t;
    t.real=c1.real+c2.real;
    t.img=c1.img+c2.img;
    return t;
}
int main()
{
    Complex c1(3,7);
    Complex c2(4,8);
    Complex c3;
    c3=c1+c2;
    c3.display();
    return 0;
}
