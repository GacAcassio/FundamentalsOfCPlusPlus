#include <iostream>
#include <string>

using namespace std;

int main(){   
    string a;
    int x = 0;
    cout << "Enter the string:" << endl;
    getline(cin, a);
    if (a[0] > 90)
    {
       a[0] = toupper(a[0]); 
       x++;
    }
    
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] == ' ' && a[i + 1] != toupper(a[i + 1]))
        {
            a[i + 1] = toupper(a[i + 1]);
            x++;
        }
    }
    if (x)
    {
        cout << a << endl;
    }
    else 
    {
        cout << "First character in each word are already in uppercase" << endl;
    }
    return 0;
}
