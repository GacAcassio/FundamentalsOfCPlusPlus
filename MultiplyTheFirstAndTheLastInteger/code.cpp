#include <iostream>

using namespace std;

int main()
{
    int number, first, last;
    cin>>number;
    first = number % 10;
    last = number;
    while (last > 10)
    {
        last /= 10;
    }
    cout<<last * first<<endl;
    return 0;
}
