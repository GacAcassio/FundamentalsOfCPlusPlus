#include<iostream> 

using namespace std;

char* reverseString(char* p)
{
    char *init = p, *final = p, aux;
    int i = 1;
    while(*init != '\0')
    {
        init++;
        i++;
    }
    init--;
    i = i / 2;
    while(i > 0){
        aux = *final;
        *final = *init;
        *init = aux;
        init--;
        final++;
        i--;
    }
    return p;
}

int main(){   
    string texto;
    cin >> texto;
    char *rev = reverseString(&texto[0]);
    cout << texto << endl;;
    return 0;
}
