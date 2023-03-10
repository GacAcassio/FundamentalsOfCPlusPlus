#include <iostream>

using namespace std;

int main()
{
    int som = 0, vec[] = {1, 2, 3, 4, 5, 8, 3, 5, 1, 1, 2, 3, 4, 5, 7, 8, 1, 2, 3, 4, 6, 6, 6, 5, 1, 7};
    string nome;
    cout << "Enter your name:" << endl;
    cin>>nome;
    for (char x : nome)
    {
        if(x < 65 || x > 90)
        {
            cout << "Invalid name" << endl;
            return 0;
        }
        som += vec[(int) x - 65];
    }
    cout << "Your lucky number is:" << som << endl;
    return 0;
}
