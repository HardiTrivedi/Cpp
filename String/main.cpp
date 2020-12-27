#include <iostream>

using namespace std;

int main()
{
    char x='A'; //single character
    char B[10]="Hello";
    char C[]="Hello";
    char D[]={'H','e','l','l','o','\0'};
    char E[]={72,69,76,76,79,'\0'};
    char *F="Hello";
    char G[]={'H','e','l','l','o','\0','a','b'}; //this will print Hello only as \0 is used to terminate a string and so the characters after \0 will be dropped
    string S="Hello";
    string N="Hardi Trivedi";
    cout<<"Char x is "<<x<<endl;
    cout<<"String B is "<<B<<endl;
    cout<<"String C is "<<C<<endl;
    cout<<"String D is "<<D<<endl;
    cout<<"String E is "<<E<<endl;
    cout<<"String F is "<<F<<endl;
    cout<<"String G is "<<G<<endl;
    cout<<"String S is "<<S<<endl;
    cout<<"String N is "<<N<<endl;
    return 0;
}
