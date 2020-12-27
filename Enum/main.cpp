#include <iostream>

using namespace std;
enum Department {CS,ECE,IT}; //index starts with 0
//enum Department {CS=1,ECE,IT} //index starts with 1
//enum Department {CS=5,ECE,IT} //index starts with 5
//enum Department {CS=5,ECE,IT=10} //index starts with 5, IT is given 10 instead of 7 which is automatically calculated when CS is given 5

int main()
{
    Department d = ECE;
    cout<<"Number assigned to d is "<<d<<endl;
    cout<<"Number assigned to ECE is "<<ECE<<endl;
}
