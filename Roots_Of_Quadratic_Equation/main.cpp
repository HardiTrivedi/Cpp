#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a,b,c,R1,R2;
    cout<<"Enter a,b,c ";
    cin>>a>>b>>c;
    R1 = (-b+sqrt(b*b-4*a*c))/(2*a);
    R2 = (-b-sqrt(b*b-4*a*c))/(2*a);
    cout<<"Roots of the quadratic equation are "<<R1<<" "<<R2;
    return 0;
}
