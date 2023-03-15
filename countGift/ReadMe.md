# Gift Count

On each birthday, Kevin's parents give him gift. On his 1st birthday he received a gift from them, 2nd birthday 8 gifts, 3rd birthday 9 gifts, 4th birthday 64 gifts, 5th birthday 25 gifts and so on. Kevin is now 20 years old. Given his age, help him calculate how many gifts he can get for that birthday.

IMPORTANT :  Implement your logic inside method countGift() and return the result.

Note : Age should be a valid positive number(>0). Incase of any invalid input, the output should be "-1".

For even number age, he received cube of his age . Eg => 8  => 8*8*8 = 512 gifts

For odd number age, he received square of his age . Eg => 7 => 7*7 = 49 gifts

Note: Test the methods by invoking them in main method. Only business logic is tested in this question and not presentation. Refer the sample input / output to check the correctness of your code.

Note: Please avoid the usage of exit(0) in your code.  

Sample Input 1:
Enter the age: 10

Sample Output 1:

1000


Sample Input 2:
Enter the age: 11

Sample Output 2:

121


Sample Input 3:
Enter the age: -5

Sample Output 3:

-1
