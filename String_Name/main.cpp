#include <iostream>

using namespace std;

int main()
{
    string Name;
    cout<< "May I know your name? ";
    cin>>Name; //this will take only Hardi as input even if full name Hardi Trivedi is given as input. anything after a spacebar will be truncated. to solve this we use get or getline. it is shown in another code.
    cout<<"Welcome "<<Name;
    return 0;
}
