#include <iostream>

using namespace std;

int main()
{
    char s[20];
    cout<<"Enter you name ";
    //cin>>s; //this will take only Hardi as input even if full name Hardi Trivedi is given as input. anything after a spacebar will be truncated. to solve this we use get or getline.

    //to print full names use any of the below methods.

    //cin.get(s,20); //or //get is unproductive to use as it even takes "enter" hitted from your keyboard as one string. so it is recommended to use getline instead.
    cin.getline(s,20);
    cout<<"Your name is "<<s<<endl;
    return 0;
}
