#include <iostream>
using namespace std;
struct Employee
{
    //fill the code
    int empid;
    int basicsalary;
    int pf;
    int med;
    float sales;
};

typedef struct Employee employee;

int calc_Bonus(int basicsalary, float sales)
{
    if (basicsalary <= 7000 && sales <= 10.0)
    {
        return 1500;
    }
    if (basicsalary <= 7000 &&  sales >= 10.0)
    {
        return 3000;
    }
    if (basicsalary <= 15000 && sales <= 10.0)
    {
        return 2000;
    }
    if (basicsalary <= 15000 && sales >= 10.0)
    {
        return 4000;
    }
    if (basicsalary > 15000 && sales <= 10.0)
    {
        return 2500;
    }
    if (basicsalary > 15000 && sales >= 10.0)
    {
        return 4500;
    }
}  

int calc_NetSalary(int basicsalary, int pf, int med)
{
    return basicsalary - pf - med;
}

int main()
{
    //fill the code
    employee emp;
    cout << "Enter the employee id" << endl;
    cin >> emp.empid;
    cout << "Enter the basic salary" << endl;
    cin >> emp.basicsalary;
    cout << "Enter the PF amount" << endl;
    cin >> emp.pf;
    cout << "Enter the mediclaim amount" << endl;
    cin >> emp.med;
    cout << "Enter the sales percentage" << endl;
    cin >> emp.sales;
    if (emp.basicsalary < 0 || emp.empid < 0 || emp.pf < 0 || emp.med < 0 || emp. sales < 0)
    {
        cout << "Unable to Calculate Salary" << endl;
    }
    else
    {
        int bonus, netSalary;
        bonus =calc_Bonus(emp.basicsalary, emp.sales);
        netSalary = calc_NetSalary(emp.basicsalary, emp.pf, emp.med);
        cout << "Total Salary with Bonus is $" <<  bonus +  netSalary << endl;
    }
}
