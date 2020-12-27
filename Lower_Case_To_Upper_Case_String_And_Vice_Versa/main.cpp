#include <iostream>

using namespace std;

int main()
{
    string s="hardi trivedi";
    //traverse a string from start (lhs)
    string::iterator it;
    cout<<"String s in lower case is: ";
    for(it=s.begin();it!=s.end();it++)
    {
        cout<<*it; //elements of the string
        //to print a given lower case string in upper case
        *it=*it-32; //ASCII minus 32 for lower to upper case alphabets
    }
    cout<<endl;
    cout<<"Lower to Upper case s string: "<<s; //upper case string s

    //to convert upper to lower case, add 32
    return 0;
}
