#include <iostream>
#include<string>
using namespace std;

int stringLength(char* str)
{
    char* aux = str;
    int i = 0;
    while (*aux != 0)
    {
        aux++;
        i++;
    }
    return i;
}

int main(){   
   string a;
   getline(cin, a);
   char* x = &a[0];
   cout << stringLength(x);
   return 0;
}
