#include<iostream>
using namespace std;

class Employee
{
private:
    int emp_id;
    string emp_name;
public:
    Employee(int id, string name)
    {
        emp_id = id;
        emp_name = name;
    }
    int getEmployeeId() { return emp_id; }
    string getEmployeeName() { return emp_name;}
};

// FulltimeEmployee Class
class FulltimeEmployee:public Employee
{
private:
    float emp_salary;
public:
    FulltimeEmployee(int id, string name, float salary):Employee(id, name) // super(id, name) in java
    {
        emp_salary = salary;
    }
    float getSalary() { return emp_salary;}
};

// ParttimeEmployee Class
class ParttimeEmployee:public Employee
{
private:
    float emp_wage;
public:
    ParttimeEmployee(int id, string name, float wage):Employee(id, name)
    {
        emp_wage = wage;
    }
    float getWage() { return emp_wage;}
};

int main()
{
    Employee emp1(100, "Tonmoy");
    FulltimeEmployee f1(101, "Zahid", 40000.0);
    ParttimeEmployee p1(102, "Jewel", 500.0);

    cout<<"# Fulltime employee salary = "<<f1.getSalary()<<endl;
    cout<<"# Parttime employee wage = "<<p1.getWage()<<endl;

    return 0;
}