# Find Array Element

Write a program to find the index of an element in the given array using Pointers.



Implement the following methods. 

1. implement 'findArrayElement'

Method signature, int findArrayElement(int* p, int element, int size)

In this method, implement a logic to find the index of an element in an array. This method accepts a 1-dimension array with values. The method should search for the element in the array. If the element is found it should return the index of the element. If NOT found then return  -1.

A method has three parameters:

	int* = the array with values to be searched

	int  element = element to be searched and index found 

	int  size = size of the array

 Return type is "int". 

2. implement 'main'

Method signature, int main()

In this method, get the following values from the user

  a) get the size of an array

  b) get the elements and store them in an array. 

  c) get the element to be searched

Call the method  'findArrayElement' by passing the elements stored in an array, the element to be searched and the array size as arguments. 

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

Enter the element to search:

9

Sample Output 1:

0



Sample Input 2: 

Enter the size of the array

3

Enter the elements

12 

56

7

Enter the element to search:

7

Sample Output 2:

2



Sample Input 3: 

Enter the size of the array

3

Enter the elements

5

9

8

Enter the element to search:

12

Sample Output 3:

-1
