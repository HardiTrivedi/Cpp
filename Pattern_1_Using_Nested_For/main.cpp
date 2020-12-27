#include <iostream>

using namespace std;

//to display numbers 1 to 25 in a 2D array
int main()
{
    int i,j,Count=1; //counter starts from 1, as we want to display 1 to 25, and iterates through the 2D array, incrementing each time
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            cout<<Count<<" "; //to display just j - 1 2 3 4 5 in one line with space in between
            Count++; //increment the counter each time
        }
        cout<<endl; //to display next 6 7 8 9 10 in a new line. this will also repeat 5 times (each time with incrementing counter) as it is inside the i for loop
    }
    return 0;
}
