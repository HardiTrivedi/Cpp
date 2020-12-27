#include <iostream>

using namespace std;

int main()
{
    float Net_Salary,Basic_Salary,Percentage_Of_Allowances,Percentage_Of_Deductions;
    cout<<"Enter your basic salary, percentage of allowances and percentage of deductions in the order ";
    cin>>Basic_Salary>>Percentage_Of_Allowances>>Percentage_Of_Deductions;
    Net_Salary = Basic_Salary+(Basic_Salary*Percentage_Of_Allowances)-(Basic_Salary*Percentage_Of_Deductions);
    cout<<"Net Salary is "<<Net_Salary<<endl;
}
