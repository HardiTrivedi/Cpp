#include <iostream>
#include<cstring>

using namespace std;

int main()
{
    string s;
    cout<<"Enter a string ";
    getline(cin,s);
    cout<<"Length of the string is "<<s.length()<<endl;
    cout<<"Size of the string is "<<s.size()<<endl;
    cout<<"Capacity of the string is "<<s.capacity()<<endl;
    cout<<"Maximum size of string in the compiler "<<s.max_size()<<endl;
    s.resize(200);
    cout<<"Capacity of the string to after resizing "<<s.capacity()<<endl;
    s.clear();
    cout<<"String after clearing "<<s<<endl;
    cout<<"Length of the string after clearing the string "<<s.length()<<endl;
    cout<<"Find out if the string is empty "<<s.empty()<<endl; //if string is empty, 1 is printed. if the string is not empty, 0 is printed
    return 0;
}
