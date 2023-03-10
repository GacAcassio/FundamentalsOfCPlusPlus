# Sort Array - Pointer

Write a program to sort the elements present in the integer array using pointers.

Implement the following methods.

1. implement 'sortArray'

Method signature, int* sortArray(int* ptr,int size)

in this method, implement a logic to sort the elements present in an integer array given as input by the user. 

This method accepts two parameters:

 int* p  = accept the array with values to be sorted.

 int = size of array

 Return type is "int*  = Return the address of the array.

2. implement 'main'

Method signature, int main()

In this method, get the following values from the user as input.

a) get the size of an array

b) get the elements to be sorted 

Call the method 'sortArray' by passing the elements in an array to be sorted and the array size as an argument.

Note: Please avoid the usage of exit(0) in your code.  
Sample Input 1: 

Enter the size of the array

5

Enter the elements

9

5 

7 

6 

8

Sample Output 1:

5
6

7

8

9

Sample Input 2: 

Enter the size of the array

4

Enter the elements

-4

-3

-6

-7

Sample Output 2:

-7

-6

-4

-3
