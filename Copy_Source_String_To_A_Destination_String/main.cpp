#include <iostream>
#include<cstring>

using namespace std;

int main()
{
    char s[100],t[100]="";
    cout<<"Enter a string ";
    cin.getline(s,100);
    strcpy(t,s);
    cout<<"Copied string to another destination is "<<t<<endl;

    //to copy required number of elements from the string
    //cout<<"Enter the number of elements you want to copy from the string ";
    //cin>>n;
    //strncpy(t,s,n);
    //cout<<"Copied string is "<<t<<end
    return 0;
}
