#include <iostream>
#include<cstring>

using namespace std;

int main()
{
    char s[100],t;
    cout<<"Enter a string ";
    cin.getline(s,100);
    cout<<"Enter a char ";
    cin>>t;
    if(strchr(s,t)!=NULL)
    {
        cout<<strchr(s,t)<<endl;
    }
    else
    {
        cout<<"Char t not found in string s "<<endl;
    }

    //to view the occurrence of the char from rhs
    //strrchr(s,t);
    //cout<<strchr(s,t)<<endl;
    return 0;
}
