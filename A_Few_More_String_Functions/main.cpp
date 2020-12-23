#include <iostream>
#include<cstring>

using namespace std;

int main()
{
    string s="Hardi Trivedi";
    char destination[100];
    s.copy(destination,s.length()); //copying full (because s.length) string to a destination array.
    cout<<"Destination array is "<<destination<<endl;

    //to copy only first n- say 3 characters from the string, just enter 3 in place of s.length().
    //s.copy(destination,3);
    //s[3]='\0'; // to insert null character after the 3 characters have been inserted, so the index 3 is a null character

    string t="How do you do?";
    cout<<"First occurrence of  do from lhs "<<t.find("do")<<endl;
    cout<<"First occurrence of do from rhs "<<t.rfind("do")<<endl;
    cout<<"First occurrence of d from lhs "<<t.find('d')<<endl;
    cout<<"First occurrence of d from rhs "<<t.rfind('d')<<endl; //if you give a char or a string not present in t, it will give a very large value as answer indicating that the entered char or string is not in t or beyond the reach of t


    string r="Hello World";
    cout<<"First Index of char l from lhs "<<r.find_first_of('l')<<endl; //index of string can be searched inside r in similar way
    cout<<"Last Index of char l from rhs "<<r.find_last_of('l')<<endl;
    cout<<"Index of char l from index 4 onwards "<<r.find_first_of('l',4)<<endl; //so this will return the char l from world because after index 4, first time l occurs in world


    string p="How are you?";
    cout<<p.substr(3)<<endl; //extract string p from index 3 onwards
    cout<<p.substr(3,4)<<endl; //extract string p from index 3 onwards till 4 char are extracted


    string q="Programming",m="Coding";
    cout<<q.compare(m)<<endl;
    return 0;
}
