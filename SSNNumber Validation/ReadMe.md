# SSN Number Validation

The term Social Security number (SSN) refers to a unique identifier assigned to each citizens. Write a program to check if the SSN number is valid or not. The SSN number format is given,

<char><char><char><char><char><digit><digit><digit><digit><char>
A valid SSN number will have all its letters in uppercase and digits in the same order as listed above.

Implement the following method.

1. implement â€˜mainâ€™

Method signature, int main()

In this method, get the SSN number as input by the user. Validate the given SSN number. Check the following to validate the SSN number

1. The length of the SSN number is always 10.

2. Each char is an uppercase letter,

3. Each digit lies between 0 and 9,

4. Every character in SSN is either char or digit satisfying the above constraints

Note:

1. If the SSN number matches the pattern then display the message "Valid SSN number".

2. If the SSN number doesn't match the pattern then display the message "Invalid SSN number".

Note: Please avoid the usage of exit(0) in your code.  

Sample Input 1:

Enter the SSN number:
ASDFG7896K

Sample Output 1:

Valid SSN number


Sample Input 2:
Enter the SSN number:
7896ABC8K

Sample Output 2:

Invalid SSN number
