#include <iostream>

using namespace std;

int main()
{
    int x = 10,y = 5,a,b,c,d,e,f,g,h;
    char z = 7,u,v,w;
    a = x&y; //Bitwise and
    b = x|y; //Bitwise or
    c = x^y; //Bitwise xor
    d = ~x; //Bitwise not
    e = x<<1; //Bitwise left shift by 1 bit
    f = x>>1; //Bitwise right shift by 1 bit
    g = x<<2; //Bitwise left shift by 2 bit
    h = x>>2; //Bitwise right shift by 1 bit
    u = ~z;
    v = z<<1;
    w = z>>1;
    cout<<"Bitwise operator on integers: "<<"a = "<<a<<" "<<"b = "<<b<<" "<<"c = "<<c<<" "<<"d = "<<d<<" "<<"e = "<<e<<" "<<"f = "<<f<<" "<<"g = "<<g<<" "<<"h = "<<h<<endl;
    cout<<"Bitwise operator on characters: "<<"u = "<<(int)u<<" "<<"v = "<<(int)v<<" "<<"w = "<<(int)w<<endl; //int is necessary to be written because otherwise due to char the ASCII value will be shown
    return 0;
}
