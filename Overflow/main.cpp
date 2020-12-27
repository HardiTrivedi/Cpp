#include <iostream>

using namespace std;

int main()
{
    char x = 127, y = -128;
    int z = INT_MAX;
    ++x;
    --y;
    cout<<"Overflowed char x and y in integer is "<<(int)x<<" and "<<(int)y<<endl;
    cout<<"Maximum integer value is "<<z<<endl;
    ++z;
    cout<<"Overflowed integer z is "<<z<<endl;
    return 0;
}
