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
    cout<<strcmp(s1,s2)<<endl;
    return 0;
}
