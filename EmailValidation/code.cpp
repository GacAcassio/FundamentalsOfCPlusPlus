#include <iostream>

using namespace std;

int main()  
{
    string email;
    cin >> email;
    for ( int i = 0; i < email.length(); i++)
    {
        if (email[i] == '@')
        {
            for (int j = i + 1; j < email.length(); j++)
            {
                if (email[j] == '.')
                {
                    cout << "Valid email id" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "Invalid email id" << endl;  
    return 0;
}
