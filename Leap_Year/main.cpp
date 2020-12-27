#include <iostream>

using namespace std;

int main()
{
    int Year;
    cout<<"Enter a year ";
    cin>>Year;
    if(Year%4==0)
    {
        if(Year%100==0)
        {
            if(Year%400==0)
            {
                cout<<"Entered year is a leap year"<<endl;
            }
            else
            {
                cout<<"Entered year is a century year and not a leap year"<<endl;
            }
        }
        else
        {
            cout<<"Entered year is a leap year"<<endl;
        }

    }
    else
    {
        cout<<"Entered year is neither a leap year nor a century year"<<endl;
    }
    return 0;
}
