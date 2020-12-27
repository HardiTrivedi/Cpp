#include <iostream>

using namespace std;

int main()
{
    string s1="Hardi",s2="Trivedi",s;
    cout<<"Character at index 3 of string s1 is "<<s1.at(3)<<endl;
    cout<<"Character at index 3 of string s1 is "<<s1[3]<<endl;
    cout<<"First character of string s1 is "<<s1.front()<<endl;
    cout<<"Last character of string s1 is "<<s1.back()<<endl;
    cout<<"Addition of s1 and s2 is "<<s1+s2<<endl;
    s=s2;
    cout<<"Storing contents of s2 in s "<<s<<endl;
    return 0;
}
