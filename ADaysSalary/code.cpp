#include<iostream>

using namespace std;

int main()
{
    int salary;
    cout<<"Enter annual income(in dollar)=";
    cin>>salary;
    salary=(int)(salary/365);
    cout<<"One day salary(in dollar)="<<salary;
    return(0);
}
