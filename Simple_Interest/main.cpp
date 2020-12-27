#include <iostream>

using namespace std;

int main()
{
    float P,R,T,SI;
    cout<<"Enter principal, rate and time ";
    cin>>P>>R>>T;
    SI = P*R*T/100;
    cout<<" Simple interest is "<<SI;
    return 0;
}
