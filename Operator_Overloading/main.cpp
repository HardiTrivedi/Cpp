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
    Complex operator+(Complex x)
    {
        Complex temp;
        temp.real=real+x.real; //add real of c1 and real of x, which is c2 and save the result in real of temp
        temp.img=img+x.img;
        return temp;
    }
    void display()
    {
        cout<<"Addition is "<<real<<" +i"<<img<<endl;
    }
};
int main()
{
    Complex c1(3,7);
    Complex c2(4,8);
    Complex c3;
    c3=c1+c2;
    c3.display();
    return 0;
}
