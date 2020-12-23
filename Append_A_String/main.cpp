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
    cout<<"Length of the string before appending is "<<s1.length()<<endl;
    s1.append(s2); //append string s1 by s2 and save the resultant in s2
    cout<<"Appended string is "<<s1<<endl;
    cout<<"Length of the string after appending is "<<s1.length()<<endl;
    return 0;
}
