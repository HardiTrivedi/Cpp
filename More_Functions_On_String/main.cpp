#include <iostream>
#include<cstring>

using namespace std;

int main()
{
    string s1,s2;
    cout<<"Enter a string ";
    getline(cin,s1);
    cout<<"Enter another string ";
    getline(cin,s2);
    s1.push_back('a');
    cout<<"After pushing back - inserting single character at the end of the string "<<s1<<endl;
    s1.pop_back();
    cout<<"After poping back - removing single character from the end of the string "<<s1<<endl;
    s1.swap(s2);
    cout<<"Swapping s1 with s2 and printing s1 "<<s1<<endl;
    cout<<"Swapping s1 with s2 and printing s2 "<<s2<<endl;
    s1.erase();
    cout<<"Erasing the string s1 "<<s1<<endl;
    cout<<"Length of the string after erasing the string "<<s1.length()<<endl;
    return 0;
}
