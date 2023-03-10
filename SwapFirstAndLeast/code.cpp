#include <iostream>

using namespace std;

int main()   
{
    string s;
    char aux;
    cin >> s;
    aux = s[0];
    s[0] = s[s.length() - 1];
    s[s.length() - 1] = aux;
    cout << s << endl;
    return 0;    
}
