#include <iostream>

using namespace std;

int main()   
{
    int month;
    cout<<"Enter the month:";
    cin>>month;
    
    if (month <= 0 || month >= 13)
    {
        cout<<"Invalid month"<<endl;
    }
    else if (month == 12 || month <= 2)
    {
        cout<<"Season:Winter"<<endl;
    }
    else if ( month >=3 && month <= 5)
    {
        cout<<"Season:Spring"<<endl;
    }
    else if (month >=6 && month <= 8)
    {
        cout<<"Season:Summer"<<endl;
    }
    else
    {
        cout<<"Season:Autumn"<<endl;
    }
    return 0;
}
