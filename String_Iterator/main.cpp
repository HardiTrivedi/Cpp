#include <iostream>
#include<cstring>

using namespace std;

int main()
{
    string s="hardi trivedi";
    //traverse a string from start (lhs)
    string::iterator it;
    cout<<"String s is: ";
    for(it=s.begin();it!=s.end();it++)
    {
        cout<<*it; //elements of the string
    }
    cout<<endl;


    //display the elements using a simple for loop without the use of iterator
    /*
    cout<<"String s in lower case is: ";
    for(int i=0;s[i]!='\0';i++) //till s[i] is not a null character (as null character indicates end of a string)
    {
        cout<<s[i]; //elements of the string
    }
    cout<<endl;
    */


    //traverse a string from end (rhs)
    /*
    string::reverse_iterator revit;
    cout<<"Elements of the string in reverse order are: ";
    for(revit=s.rbegin();revit!=s.rend();revit++)
    {
        cout<<*revit;
    }
    cout<<endl;
    */
    return 0;
}
