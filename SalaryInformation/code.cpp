#include <iostream>

using namespace std;

int main()   
{
    int ID, Hrs, salary;
    cout<<"Input the Employee ID: ";
    cin>>ID;
    cout<<"Input the working hrs: ";
    cin>>Hrs;
    cout<<"Salary amount/hour: ";
    cin>>salary;
    cout<<"Employee ID = "<<ID<<"\nSalary = "<<Hrs*salary;
    return(0);
}
