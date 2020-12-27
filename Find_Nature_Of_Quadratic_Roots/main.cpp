#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter a,b,c "<<endl;
    cin>>a>>b>>c;
    if(((b*b)-(4*a*c))==0)
    {
        cout<<"Roots are real and equal: "<<" "<<(-b/(2*a))<<endl;
    }
    else if(((b*b)-(4*a*c))>=0)
    {
        cout<<"Roots are real and unequal: "<<" "<<(-b+sqrt(b*b-4*a*c))/(2*a)<<" and "<<(-b-sqrt(b*b-4*a*c))<<endl;
    }
    else
    {
        cout<<"Roots are imaginary "<<endl;
    }
    return 0;
}
