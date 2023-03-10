#include <iostream>

using namespace std;

int main(){   
    string a, b, c = "";
    cout << "Inmate's name:";
    getline(cin, a);
    cout << "Inmate's father's name:";
    getline(cin, b);
    for (char x : a)
    {
        x = toupper(x);
        if ((x < 65 || x > 90) && x != ' ')
        {
            cout << "INVALID NAME" << endl;
            return  0;
        }
        c += x;
    }
    
    c += " ";
    
    for (char x : b)
    {
        x = toupper(x);
        if (x < 65 || x > 90)
        {
            cout << "INVALID NAME" << endl;
            return  0;
        }
        c += x;
    }
    
    cout << c << endl;
    
    return 0;
}
