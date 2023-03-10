#include <iostream>

int main()
{
    int n;
    std::cin>>n;
    std::cout << "Last three digits : " << n % 1000 << std::endl;
    if ( n % 8 == 0)
        std::cout << "Number is divisible by 8" << std::endl;
    else
        std::cout << "Number is not divisible by 8" << std::endl;
    return  0;
}
