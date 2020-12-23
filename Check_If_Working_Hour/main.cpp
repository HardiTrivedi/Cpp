#include <iostream>

using namespace std;

int main()
{
    int hour;
    cout<<"Enter the hour in 24 clock system "<<endl;
    cin>>hour;
    if(hour>=9&&hour<=18)
    {
        cout<<"It is a working hour "<<endl;
    }
    else
    {
        cout<<"It is a leisure hour "<<endl;
    }
    return 0;
}
