#include <iostream>

using namespace std;

struct Time{
    int hours;
    int minutes;
    int seconds;
};

int main()
{
    //fill the code
    struct Time ob, ob1;
    int h, m, s;
    cout << "Enter start time [hh mm ss]:" << endl;
    cin >> ob.hours >> ob.minutes >> ob.seconds;
    if (ob.hours < 0 || ob.hours >= 24 || ob.minutes < 0 || ob.minutes > 60 || ob.seconds < 0 || ob.seconds > 60 )
    {
        cout << "Invalid start time" << endl;
        return 0;
    }
    cout << "Enter start time [hh mm ss]:" << endl;
    cin >> ob1.hours >> ob1.minutes >> ob1.seconds;
    if (ob1.hours < 0 || ob1.hours >= 24 || ob1.minutes < 0 || ob1.minutes > 60 || ob1.seconds < 0 || ob1.seconds > 60 || ob1. hours < ob.hours || (ob1.hours == ob.hours && (ob1.minutes < ob.minutes || (ob1.minutes == ob.minutes && ob1.seconds < ob.seconds) )))
    {
        cout << "Invalid end time" << endl;
        return 0;
    }
    s = (ob1.hours * 3600 + ob1.minutes * 60 + ob1.seconds - ob.hours * 3600 - ob.minutes * 60 - ob.seconds);
    h = s / 3600;
    s = s % 3600;
    m = s  / 60;
    s = s % 60;
    printf("TIME TAKEN: %d:%d:%d\n", h, m, s);
    return 0;
}
