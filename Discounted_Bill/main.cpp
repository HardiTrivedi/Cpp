#include <iostream>

using namespace std;

int main()
{
    int amount;
    cout<<"Enter your amount"<<endl;
    cin>>amount;
    if(amount>=5000)
    {
        amount-=((amount*20)/100);
        cout<<"You have been availed 20% discount: "<<amount<<endl;
    }
    else if(amount>=2000 && amount<5000)
    {
        amount-=((amount*10)/100);
        cout<<"You have been availed 10% discount: "<<amount<<endl;
    }
    else
    {
        amount-=((amount*5)/100);
        cout<<"You have been availed 5% discount: "<<amount<<endl;
    }
    return 0;
}
