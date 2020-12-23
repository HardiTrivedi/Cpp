#include <iostream>
#include<cstring>

using namespace std;

int main()
{
    string s="Hardi08 Trivedi@";
    int vowels=0,consonants=0,words=0,space=0,digits=0,special_characters=0;
    string::iterator it;
    for(it=s.begin();it!=s.end();it++)
    {
        if(*it=='a'||*it=='e'||*it=='i'||*it=='o'||*it=='u'||*it=='A'||*it=='E'||*it=='I'||*it=='O'||*it=='U')
        {
            vowels++;
        }
        else if(*it==' ' && *(it+1)!=' ') //space is shown as space between single quotes //if by mistake more than one spaces
                                        //are given between one word and the other, if we write only *it==' ' and check the condition,
                                        //it will add to space counter and increment it every time. this will give more words then there exists.
                                        //to avoid this, we write *(it+1)!=' '
        {
            space++;
        }
        else if((*it>=65 && *it<=90)||(*it>=97 && *it<=122))
        {
            consonants++;
        }
        else if(*it>='0'&&*it<='9')
        {
            digits++;
        }
        else
        {
            special_characters++;
        }
    }
    words=space+1; //if there is 1 space in a string, it means that there are two words. so words=space+1;
    cout<<"Number of vowels "<<vowels<<endl;
    cout<<"Number of words "<<words<<endl;
    cout<<"Number of consonants "<<consonants<<endl;
    cout<<"Number of digits "<<digits<<endl;
    cout<<"Number of special characters "<<special_characters<<endl;
    return 0;
}
