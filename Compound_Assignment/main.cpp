#include <iostream>

using namespace std;

int main()
{
    int a,b,sum;
    cout<<"Enter a,b ";
    cin>>a>>b;
    //sum = sum+a+b;
    sum += a+b; // compound assignment - instead of writing sum = sum+a+b; writing sum += a+b;
    cout<<"Sum is "<<sum;
    return 0;
}
