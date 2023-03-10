#include <iostream>
#include <string.h>

using namespace std;

int main()   
{
    string ssn;
    cout << "Enter the SSN number:" << endl;
    cin >> ssn;
    if (ssn.length() != 10)
    {
        cout << "Invalid SSN number" << endl;
    }
    else
    {
        for (int i = 0; i < 5; i++)
        {
            if(ssn[i] != toupper(ssn[i]) || ssn[i] < 65 || ssn[i] > 90)
            {
                cout << "Invalid SSN number" << endl;
                return 0;
            }
        }
        for (int i = 5; i < 9; i++)
        {
           if(ssn[i] < 47 || ssn[i] > 58)
            {
                cout << "Invalid SSN number" << endl;
                return 0;
            } 
        }
        if(ssn[9] != toupper(ssn[9]) || ssn[9] < 65 || ssn[9] > 90)
        {
            cout << "Invalid SSN number" << endl;
            return 0;
        }
        cout << "Valid SSN number" << endl;
    }
    return 0;
}
