#include <iostream>
#include<bits/stdc++.h>
using namespace std;

float celsiustoFahrenheitConversion(float num){
	//Implement your code here
	//Return the Fahrenheit value 
    return (num * 9) / 5 + 32;
}

int main()
{
	//Implement your code here
	float n;
	cin >> n;
	printf("%.1f", celsiustoFahrenheitConversion(n));
    return 0;
}
