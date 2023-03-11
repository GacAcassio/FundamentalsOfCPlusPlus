#include<iostream> 
using namespace std;

int findArrayElement(int* p, int element, int size)
{
    int *aux = p;
    for (int i = 0; i < size; i++)
    {
        if (*aux == element)
            return i;
        aux++;
    }
    return -1;
}

int main(){   
    int *vec, n, *aux, e;
    cout << "Enter the size of the array" << endl;
    cin >> n;
    vec = (int *)::operator new(sizeof(int) * n);
    aux = vec;
    cout << "Enter the lements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin>>*aux;
        aux++;
    }
    cout << "Enter the element to search:" << endl;
    cin >> e;
    cout << findArrayElement(vec, e, n) << endl;
    return 0;
}
