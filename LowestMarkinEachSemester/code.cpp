#include <iostream>

using namespace std;

int main()   
{
    int s, n, m, a;
    cout << "Enter number of semesters:" << endl;
    cin>>s;
    int vec[s];
    for (int i = 0; i < s; i++)
    {
        cout << "Enter number of subjects in semester " << i + 1 << ":" << endl;
        cin>>n;
        cout << "Marks obtained in semester " << i + 1 << ":" << endl;
        m = 101;
        for (int j = 0; j < n; j++)
        {
            cin>>a;
            if ( a < m)
            {
                m = a;
            }
            if ( a > 100)
            {
                m = -1;
            }
        }
        vec[i] = m;
    }
    for (int i = 0; i < s; i++)
    {
        if (vec[i] < 0)
        {
            cout << "You have entered invalid mark" << endl;
            return 0;
        }
    }
        for (int i = 0; i < s; i++)
    {
        cout << "Minimum mark in semester" << i + 1 << ":" << vec[i] << endl;
    }
    
