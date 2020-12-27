#include <iostream>
#include<cstring>

using namespace std;

int main()
{
    char s1[100],s2[100];
    cout<<"Enter first string ";
    cin.getline(s1,100);
    cout<<"Enter second string ";
    cin.getline(s2,100);
    if(strstr(s1,s2)!=NULL) //if string s2 is a substring of string s1
    {
        cout<<strstr(s1,s2)<<endl; //this will print the string from s1 after the string 2 string start in string 1. so, if hardi is s1 and rd is s2, the cout<<strstr(s1,s2) is rdi - it is starting from r and going till s1 ends
    }
    else
    {
        cout<<"String s2 not found in string s1 "<<endl;
    }
    return 0;
}
