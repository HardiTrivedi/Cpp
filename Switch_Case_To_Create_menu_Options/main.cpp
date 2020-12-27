#include <iostream>

using namespace std;

int main()
{
    cout<<"Menu"<<endl;
    cout<<"1. Add"<<endl;
    cout<<"2. Subtract"<<endl;
    cout<<"3. Multiply"<<endl;
    cout<<"4. Divide"<<endl;
    int Choice;
    float a,b,c;
    cout<<"Enter your choice ";
    cin>>Choice;
    cout<<"Enter a,b ";
    cin>>a>>b;
    switch(Choice)
    {
        case 1: c = a+b;
                cout<<"Addition is: "<<c;
                break;
        case 2: c = a-b;
                cout<<"Subtraction is: "<<c;
                break;
        case 3: c = a*b;
                cout<<"Multiplication is: "<<c;
                break;
        case 4: if(b==0)
                {
                    cout<<"Division by zero error ";
                }
                else
                {
                c = a/b;
                cout<<"Division is: "<<c;
                }
                break;
        default: cout<<"Enter a choice between 1 and 4 ";
    }
    return 0;
}
