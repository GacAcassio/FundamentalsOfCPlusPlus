#include <iostream>

using namespace std;

int countGift(int age){
    //Implement your code here
    //Return the number of gifts
    if (age <= 0)
        return -1;
    return (age % 2 == 0)? age * age * age : age * age;
}

int main()
{
    //Implement your code here
    int age;
    cout << "Enter the age:";
    cin >> age;
    cout << countGift(age) << endl;
    return 0;
}
