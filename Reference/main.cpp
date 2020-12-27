#include <iostream>

using namespace std;

int main()
{
    int x=10;
    int &y=x;
    cout<<"x is "<<x<<endl;
    cout<<"y is "<<y<<endl;
    cout<<"Address of x "<<&x<<endl;
    cout<<"Address of y "<<&y<<endl;
    x++;
    cout<<"x after incrementing x is "<<x<<endl;
    cout<<"y is incrementing x is "<<y<<endl;
    y++;
    cout<<"x after incrementing y is "<<x<<endl;
    cout<<"y after incrementing y is "<<y<<endl;
    //now as &y=x already, we cannot assign y to any other variable - &y=a; gives error
    return 0;
}
