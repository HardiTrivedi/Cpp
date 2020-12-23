#include <iostream>

using namespace std;

int main()
{
    int day;
    cout<<"Enter day number"<<endl;
    cin>>day;
    if(day==1)
    {
        cout<<"Day is Sunday"<<endl;
    }
    else if(day==2)
    {
        cout<<"Day is Monday"<<endl;
    }
    else if(day==3)
    {
        cout<<"Day is Tuesday"<<endl;
    }
    else if(day==4)
    {
        cout<<"Day is Wednesday"<<endl;
    }
    else if(day==5)
    {
        cout<<"Day is Thursday"<<endl;
    }
    else if(day==6)
    {
        cout<<"Day is Friday"<<endl;
    }
    else
    {
        cout<<"Day is Saturday"<<endl;
    }
    return 0;
}
