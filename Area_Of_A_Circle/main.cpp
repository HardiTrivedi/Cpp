#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float R,Area;
    cout<<"Enter radius of the circle ";
    cin>>R;
    Area = 3.1415f*(pow(R,2));
    //Area = (float)22/7*(pow(R,2));
    cout<<"Area is "<<Area;
    return 0;
}
