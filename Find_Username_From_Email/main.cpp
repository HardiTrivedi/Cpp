#include <iostream>

using namespace std;

int main()
{
    string s,t=" ";
    int index,i,j;
    cout<<"Enter your email address ";
    getline(cin,s);
    index=s.find('@'); //find the index of @
    cout<<"Index of @ is "<<index<<endl;
    t.resize(index);
    for(i=0,j=0;i<index,j<index;i++,j++)
    {
        t[j]=s[i];
    }
    t[index]='\0'; //terminating the string with null character at the last index
    cout<<"User name is "<<t<<endl;
    return 0;
}
