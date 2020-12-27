#include <iostream>
#include<cstring>

using namespace std;

int main()
{
    char s[100],delimiter[100];
    cout<<"Enter a string with tokens and delimiter ";
    cin.getline(s,100);
    cout<<"Enter the delimiter "; //enter the delimiter with double quotes. e.g. if delimiter is = then enter "=". if delimiter is =; then enter "=;"
    cin.getline(delimiter,100);

    //cout<<strtok(s,delimiter); //this will print only the first token

    //to print all tokens
    char *token=strtok(s,delimiter);
    while(token!=NULL)
    {
        cout<<token<<endl;
        token=strtok(NULL,delimiter);
    }
    return 0;
}
