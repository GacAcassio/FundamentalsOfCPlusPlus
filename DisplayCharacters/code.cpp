#include <iostream>

using namespace std;

int main()
{
    int a[4];
    cin>>a[0]>>a[1]>>a[2]>>a[3];
    for(int i = 0; i<4; i++)
    {
        ((a[i] >= 65 && a[i] <= 90) || (a[i] >= 97 && a[i] <= 122))? cout<<a[i]<<"-"<<(char)a[i]<< endl : cout<<"Invalid"<<endl;
    }
    return 0;
}
