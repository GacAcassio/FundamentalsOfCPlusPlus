#include<iostream>

using namespace std;

int* sortArray(int* ptr, int size)
{
    int a = 0,*aux = ptr, *aux2 = ptr + 1;
    while ( a < size)
    {
        if(*aux > *aux2)
        {
            *aux2 = *aux + *aux2;
            *aux = *aux2 - *aux;
            *aux2= *aux2 - *aux;
            a = 0;
        }
        else
        {
            a++;
        }
        aux++;
        aux2++;
        if (aux2 == ptr + size )
        {
            aux = ptr;
            aux2 = ptr + 1;
        }
    }
    return ptr;
}

int main()
{   
    int n;
    cin >> n;
    int vec[n], *r;
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    r = sortArray(vec, n);
    for (int i = 0; i < n; i++)
    {
        cout << vec[i] << endl;
    }
    return 0;
}
