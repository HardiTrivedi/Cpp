#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout<<"Enter a,b "<<endl;
    cin>>a>>b;
    if(a>b)
    {
        int c = a+b; //c is declared inside if
        cout<<"c is: "<<c;
    }
    //cout<<"c is: "<<c; //if cout c is given here it will show undeclared variable c as c is only defined inside the if block and c is deleted out of memory stack when program exits if block
    return 0;
}
