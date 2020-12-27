#include <iostream>
#include<cstring>

using namespace std;

int main()
{
    string s="Hardi Trivedi";
    int Count;
    string::iterator it;
    for(it=s.begin();it!=s.end();it++)
    {
        Count++;
    }

    //or using simple for loop
    /*
    for(int i=0;s[i]!="\0";i++)
    {
        Count++;
    }
    */
    cout<<"Length of the string is "<<Count<<endl;
    return 0;
}
