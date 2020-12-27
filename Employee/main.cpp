#include <iostream>

using namespace std;

class employee
{
private:
    string name;
    int employee_id;
public:
    employee()
    {
        employee_id=0;
    }
    employee(string n, int empid=0)
    {
        name=n;
        employee_id=empid;
    }
    string getName()
    {
        return name;
    }
    int getEmployeeID()
    {
        return employee_id;
    }

};
class FullTimeEmployee: public employee
{
private:
    int salary;
public:
    FullTimeEmployee(string n, int empid, int sal=0):employee(n, empid)
    {
        salary=sal;
    }
    int getSalary()
    {
        return salary;
    }
};
class PartTimeEmployee: public employee
{
private:
    int wages;
public:
    PartTimeEmployee(string n, int empid, int wage=0):employee(n, empid)
    {
        wages=wage;
    }
    int getWage()
    {
        return wages;
    }
};
int main()
{
    employee e;
    cout<<"Employee's ID is "<<e.getEmployeeID()<<endl;
    cout<<endl;
    employee e1("Hardi Trivedi", 11567);
    cout<<e1.getName()<<"'s ID is "<<e1.getEmployeeID()<<endl;
    cout<<endl;
    FullTimeEmployee f("Rachel", 11289, 100000);
    cout<<f.getName()<<"'s ID is "<<f.getEmployeeID()<<". "<<f.getName()<<"'s salary is "<<f.getSalary()<<endl;
    cout<<endl;
    PartTimeEmployee p("Monica", 14832, 30000);
    cout<<p.getName()<<"'s ID is "<<p.getEmployeeID()<<". "<<p.getName()<<"'s daily wages are "<<p.getWage()<<endl;
    return 0;
}
