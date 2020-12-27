#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float r,h,V;
    cout<<"Enter radius and height of the cylinder ";
    cin>>r>>h;
    V = 3.1415f*(pow(r,2))*h;
    cout<<"Volume of the cylinder is "<<V;
    return 0;
}
