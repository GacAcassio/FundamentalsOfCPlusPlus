#include <iostream>

using namespace std;

int main()
{
    int size;
    cout<<"Enter the size of an array:"<<endl;
    cin>>size;
    if (size <= 0)
    {
        cout<<"Invalid array size"<<endl;
        return 0;
    }
    cout<<"Enter the array elements:"<<endl;
    int array[size];
    for (int i=0; i < size; i++)
    {
        cin>>array[i];
    }
    int c = 0;
    for (int i=0; i < size; i++)
    {
        if (array[i] % 2 == 0 && array[i] < 10)
        {
            cout<<array[i];
            c++;
        }
    }
    if (c == 0)
    {
        cout<<"Single digit even number is not found in the array";
    }
    cout<<endl;
    return 0;
}
