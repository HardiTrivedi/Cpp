#include <iostream>

using namespace std;

int main()
{
    string s1,s2;
    int n;
    cout<<"Enter a string ";
    getline(cin,s1);
    cout<<"Enter a string to be inserted ";
    getline(cin,s2);
    cout<<"Enter at what index the string should be inserted ";
    cin>>n;
    cout<<"New inserted string is "<<s1.insert(n,s2)<<endl;
    return 0;
}
