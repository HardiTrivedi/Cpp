#include <iostream>

using namespace std;

int main()
{
    float m1,m2,m3;
    float Average;
    cout<<"Enter m1,m2,m3"<<endl;
    cin>>m1>>m2>>m3;
    Average = (float)((m1+m2+m3)/3);
    if(Average>=60)
    {
        cout<<"Your grade is A"<<endl;
    }
    else if(Average>=35 && Average<60)
    {
        cout<<"Your grade is B"<<endl;
    }
    else
    {
        cout<<"Your grade is C"<<endl;
    }
    return 0;
}
