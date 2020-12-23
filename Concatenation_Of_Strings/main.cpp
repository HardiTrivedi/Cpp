#include <iostream>
#include<cstring>

using namespace std;

int main()
{
    char s[100],t[100];
    cout<<"Enter first string ";
    cin.getline(s,100);
    cout<<"Enter second string ";
    cin.getline(t,100);
    strcat(s,t);
    cout<<"Concatenated string is "<<s<<endl;

    //to concatenate required number of elements from the 2nd string
    //cout<<"Enter the number of elements you want to concatenate from the second string ";
    //cin>>n;
    //strncat(s,t,n);
    //cout<<"Concatenated string is "<<s<<endl;
    return 0;
}
