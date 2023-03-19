#include <iostream>
#include <string.h>
using namespace std;
struct DateOfBirth
{
    int date,month,year;
};
struct Student
{
    string name;
    int roll;
    DateOfBirth dob;
};
int main()
{
    //Fill the code here
    Student s;
    cout << "Enter name: ";
    cin >> s.name;
    cout << "Enter roll number: ";
    cin >> s.roll;
    cout << "Enter Date of birth [DD MM YYY] format: ";
    cin >> s.dob.date >> s.dob.month >> s.dob.year;
    
    if (s.dob.date < 1 || s.dob.date > 31 || s.dob.month < 1 || s.dob.month > 12 || s.dob.year < 1 )
    {
        cout << "Invalid date" << endl;
        return 1;
    }
    if(s.roll < 1)
    {
        cout <<  "Invalid roll number" << endl;
        return 1;
    }
    cout << "Name : " << s.name << endl;
    cout << "RollNo : " << s.roll << endl;
    printf("Date of birth : %d/%d/%d\n", s.dob.date, s.dob.month, s.dob.year);
    return 0;
}
