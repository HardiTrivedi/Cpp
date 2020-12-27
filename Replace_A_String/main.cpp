#include <iostream>

using namespace std;

int main()
{
    string s1,s2;
    int n,m;
    cout<<"Enter a string ";
    getline(cin,s1);
    cout<<"Enter a string to be replaced ";
    getline(cin,s2);
    cout<<"Enter at what index the string should be replaced ";
    cin>>n;
    cout<<"Enter how many characters after the index should be replaced ";
    cin>>m;
    cout<<"Replaced string at index "<<n<<" for "<<m<<" characters starting form index "<<s1.replace(n,m,s2)<<endl;
    return 0;
}
