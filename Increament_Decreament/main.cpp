#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,e,f,g,h,w,x,y,z;
    cout<<"Enter a,b,c,d,e,f,g,h ";
    cin>>a>>b>>c>>d>>e>>f>>g>>h;
    w = a++ * b; //post increament
    x = ++c * d; //pre increament
    y = e-- * f; //post decreament
    z = --g * h; //pre decreament
    cout<<"w = "<<w<<" "<<"x = "<<x<<" "<<"y = "<<y<<" "<<"z = "<<z<<"a = "<<a<<" "<<"b = "<<b<<" "<<"c = "<<c<<" "<<"d = "<<d<<" "<<"e = "<<e<<" "<<"f = "<<f<<" "<<"g = "<<g<<" "<<"h = "<<h;
    return 0;
}
