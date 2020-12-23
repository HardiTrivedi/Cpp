#include <iostream>

using namespace std;

int main()
{
    char s1[100],s2[100];
    cout<<"Enter a integer to convert string 1 to integer ";
    cin>>s1;
    cout<<"Enter a float to convert string 2 to float ";
    cin>>s2;
    long int x=strtol(s1,NULL,10); //10 if you want a decimal - base 10.
    float y=strtof(s2,NULL);
    cout<<"String to integer "<<x<<endl;
    cout<<"String to float "<<y<<endl;
    return 0;
}
