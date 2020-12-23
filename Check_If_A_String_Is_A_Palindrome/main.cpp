#include <iostream>
#include<cstring>

using namespace std;

int main()
{
    string s,t=" ";
    int i,j,length_s;
    cout<<"Enter a string ";
    getline(cin,s);
    length_s=s.length();
    t.resize(length_s);
    for(i=0,j=(length_s-1);i<length_s,j>=0;i++,j--) //i starts from 0 to length of t(=s) (iterating from lhs to rhs of t) and j starts from reverse of s, i.e., from length_s-1 (iterating from rhs to lhs of s)
    {
        t[i]=s[j];
    }
    t[length_s]='\0'; //terminating the string with null character at the last index
    cout<<"Given string is "<<s<<endl;
    cout<<"Reversed string is "<<t<<endl;
    if(t==s)
    {
        cout<<"String is a palindrome "<<endl;
    }
    else
    {
        cout<<"String is not a palindrome "<<endl;
    }
    return 0;
}
