#include <iostream> 

using namespace std;

int main()
{
    char a;
    cout<<"Enter the letter"<<endl;
    cin>>a;
    int x = int(a);
    if((x >= 65 && x <= 90) || (x >= 97 && x <= 122))
    {
        cout<<a<<"-"<<x<<endl;
    }
    else
    {
        cout<<"Invalid";
    }
    return(0);
}
