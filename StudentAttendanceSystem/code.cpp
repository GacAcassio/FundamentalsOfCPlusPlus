#include <iostream>

using namespace std;

int main()   
{
    int n;
    cout << "Enter number of students:" << endl;
    cin >> n;
    string vec [n][3], c;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter roll number:";
        cin >> vec[i][0];
        cout << "Enter name:";
        cin >> vec[i][1];
        cout << "Enter gender:";
        cin >> vec[i][2];
    }
    
    cout << "Enter the roll number of students to view:";
    cin >> c;
    
    for (int i = 0; i < n; i++)
    {
        if (c == vec[i][0])
            cout << vec[i][1] << endl << vec[i][2] << endl;
    }
    return 0;
}
