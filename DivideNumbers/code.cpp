#include <iostream>
using namespace std;

int divideNumbers(int num){
    //Divide the numbers and return it
    return ((num / 10) / (num % 10));
}

int main()
{
    //Call the function and print the result
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << divideNumbers(n) << endl;
    return 0;
}
