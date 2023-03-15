#include <iostream>

using namespace std;

string convertToDays(int num){
    //Return the day
    switch (num)
    {
        case 1:
            return "Monday";
        case 2:
            return "Tuesday";
        case 3:
            return "Wednsday";
        case 4:
            return "Thursday";
        case 5:
            return "Friday";
        case 6:
            return "Saturday";
        case 7:
            return "Sunday";
        default:
            return "Invalid";
    }
}

int main()
{
    //Call the function and print the result
    int n;
    cin >> n;
    cout << convertToDays(n) << endl;
    return 0;
}
