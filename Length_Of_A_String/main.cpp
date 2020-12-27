#include <iostream>
#include<cstring>

using namespace std;

int main()
{
    char s[100]="Hardi Trivedi"; //length is 12 letter plus one space in between
    cout<<"Length of the string is "<<strlen(s)<<endl;

    char p[100];
    cout<<"Enter a string ";
    cin.getline(p,100);
    cout<<"Length of the string is "<<strlen(p)<<endl;
    return 0;
}
