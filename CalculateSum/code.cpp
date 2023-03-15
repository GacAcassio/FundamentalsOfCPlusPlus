#include <iostream>

using namespace std;

int calculateSum(int num){
    //Add the numbers and return the sum
    int sum = 0;
    sum += num /1000;
    num = num % 1000;
    sum += num / 100;
    num = num % 100;
    sum += num / 10;
    sum += num % 10;
    return sum;
}

int main()
{
    //Call the function and print the result
    int n;
    cout << "Enter the number:";
    cin >> n;
    cout << calculateSum(n) << endl;
    return 0;
}
