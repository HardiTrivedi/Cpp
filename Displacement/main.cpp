#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float u,t,a,s;
    cout<<"Enter initial velocity, time and acceleration ";
    cin>>u>>t>>a;
    s = (u*t) + (0.5*a*(pow(t,2)));
    cout<<"Displacement is "<<s;
    return 0;
}
